#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[300001] = { 0, };

int main()
{
	int n, num;
	cin >> n;

	if (n == 0 )
	{
		cout << 0;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	sort(arr, arr + 300001, greater<int>());

	int exceptCount = round(n * 0.15f);
	int count = 0;
	int sum = 0;
	int N = 0;
	for (int i = 0; i < 300001; i++)
	{
		if (!arr[i]) break;

		if (count >= exceptCount && count < n - exceptCount)
		{
			sum += arr[i];
			N++;
		}

		count++;
	}

	cout << round((float)sum / N);
}