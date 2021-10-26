#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2);
                return 0;
            }
        }
    }
}