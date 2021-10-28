#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    int itr;
    if (n == m)
        itr = n;
    else
        itr = min(n, m);

    if (itr % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshant";
}