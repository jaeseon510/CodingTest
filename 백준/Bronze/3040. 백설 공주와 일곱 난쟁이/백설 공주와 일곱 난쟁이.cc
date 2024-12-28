#include <iostream>
using namespace std;
int main()
{
    int n[9], sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> n[i];
        sum += n[i];
    }
    int x, y, answer = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == j || (sum - n[i] - n[j] != 100))
                continue;
            answer = 1;
            x = i;
            y = j;
            break;
        }
        if (answer == 1)
            break;
    }

    for (int i = 0; i < 9; i++)
    {
        if (i != x && i != y)
            cout << n[i] <<endl;
    }
    return 0;
}