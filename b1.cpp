#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        temp += s[i];
    }
    return temp;
}
bool check(string s, string k)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != k[i])
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    if (check(s, rev(s)))
        cout << "Yes";
    else
        cout << "No";
    system("pause");
}