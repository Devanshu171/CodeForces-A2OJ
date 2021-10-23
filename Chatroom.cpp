#include <iostream>
using namespace std;

string hello(string s)
{
    if (s.size() < 5)
        return "NO";
    int j = 0;
    int count = 0;
    string str = "hello";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == str[j])
        {
            j++;
            count++;
        }
        if (count == 5)
            return "YES";
    }

    return "NO";
}
int main()
{
    string s;
    cin >> s;

    string ans = hello(s);
    cout << ans;

    return 0;
}