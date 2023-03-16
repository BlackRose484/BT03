#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    int temp = 1;
    int i = 0;
    int j = 0;
    int moc_u = 0;
    int moc_l = 0;
    int moc_d = 0;
    int moc_r = 0;
    while (temp <= r * c)
    {
        while (j + moc_r < c)
        {
            a[i][j] = temp;
            temp++;
            if (temp > r * c)
            {
                break;
            }
            j++;
        }
        if (temp > r * c)
        {
            break;
        }
        moc_u++;
        temp--;
        j--;
        while (i + moc_d < r)
        {
            a[i][j] = temp;
            temp++;
            if (temp > r * c)
            {
                break;
            }
            i++;
        }
        if (temp > r * c)
        {
            break;
        }
        moc_r++;
        temp--;
        i--;
        while (j - moc_l >= 0)
        {
            a[i][j] = temp;
            temp++;
            if (temp > r * c)
            {
                break;
            }
            j--;
        }
        if (temp > r * c)
        {
            break;
        }
        moc_d++;
        temp--;
        j++;
        while (i - moc_u >= 0)
        {
            a[i][j] = temp;
            temp++;
            if (temp > r * c)
            {
                break;
            }
            i--;
        }
        if (temp > r * c)
        {
            break;
        }
        moc_l++;
        temp--;
        i++;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
}