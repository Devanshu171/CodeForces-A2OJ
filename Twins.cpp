#include <iostream>
#include <algorithm>
using namespace std;
int mincoin(int a[], int tsum, int n)
{
    int sum = 0;
    int i = n - 1;
    int count = 0;
    while (i >= 0)
    {
        sum += a[i];
        tsum -= a[i];
        count++;
        if (sum > tsum)
            return count;
        i--;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int tsum = 0;
    for (int i = 0; i < n; i++)
        tsum += a[i];
    sort(a, a + n);
    cout << mincoin(a, tsum, n);

    return 0;
}