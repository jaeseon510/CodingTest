#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
using int64 = long long int;

vector<int64> prime;
int64 sum = 0;

void get_prime(vector<int64>& prime)
{
	int n = 45000;
	int* arr = new int[n];

	for (int i = 2; i < n; i++)
		arr[i] = i;

	arr[0] = 0;
	arr[1] = 0;

	for (int i = 2; i < n; i++)
	{
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j < n; j += i)
			arr[j] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			prime.push_back(arr[i]);
	}
}

int64 square_yes_yes(int64 limit, int64 max_iter, int64 index, int64 tmp, int depth)
{
	if (tmp > limit) return 0;

	int64 sum = 0;
	for (int64 i = index; i < max_iter; i++)
	{
		if (tmp * prime[i] * prime[i] > limit)
			break;

		int64 sum_t = (int64)((long double)limit / (tmp * prime[i] * prime[i]));
		if ((depth % 2) == 0)
			sum += sum_t;
		else
			sum -= sum_t;

		sum += square_yes_yes(limit, max_iter, i + 1, tmp * prime[i] * prime[i], depth + 1);
	}
	return sum;
}

int64 S(int64 n, int64& iter)
{
	int64 S_n;

	while ((prime[iter] * prime[iter]) <= n)
		iter++;	
	S_n = n - square_yes_yes(n, iter, 0, 1, 0);
	return S_n;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int K;
	cin >> K;

	int64 iter = 0;
	get_prime(prime);

	int n = K;
	int64 S_n = 0;

	while (true)
	{
		iter = 0;
		S_n = S(n, iter);

		if (S_n == K)
		{
			cout << n << endl;
			break;
		}
		n += K - S_n;
	}
	
	return 0;
}