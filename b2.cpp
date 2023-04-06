#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> seen;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        seen[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (seen[a[i]] > 1)
        {
            cout << "Yes";
            seen[a[i]] = 1;
            exit(0);
        }
    }
    cout << "No";
    cout<<"Hello"<<endl;
    system("pause");
}
