#include <iostream>
#include <algorithm>
// #include <math.h>
#include <vector>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<int> vec;
    for (int i = 0; i < s.size(); i += 2)
    {
        vec.push_back(int(s[i]));
    }

    string ans = "";
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        if (ans.size() == 0)
        {
            ans +=(char)vec[i];
        }
        else
        {
            ans += '+';
            ans +=(char)vec[i];
        }
    }

    cout << ans;

    return 0;
}