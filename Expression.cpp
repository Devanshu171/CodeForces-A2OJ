#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = INT_MIN;

    int p1 = a + b + c;
    ans = max(ans, p1);
    int p2 = (a + b) * c;
    ans = max(ans, p2);
    int p3 = a * (b + c);
    ans = max(ans, p3);
    int p4 = a + (b * c);
    ans = max(ans, p4);
    int p5 = (a * b) + c;
    ans = max(ans, p5);
    int p6 = a * b * c;
    ans = max(ans, p6);

    cout << ans;

    return 0;
}