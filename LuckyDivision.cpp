#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[] = {4, 7, 47, 77, 44, 447, 444, 477, 4777};
    bool k = false;
    for (int i = 0; i < 9; i++)
    {
        if (n % a[i] == 0)
        {
            k = true;
            break;
        }
    }
    if (k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}