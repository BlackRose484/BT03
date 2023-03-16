#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int temp = 1;
    int i = 0;
    int j = 0;
    int moc_t = 0;
    int moc_d = 0;
    while (temp <= r * c)
    {
        while (j < c)
        {
            arr[i][j] = temp;
            temp++;
            if (temp > r * c)
                break;
            j++;
        }
        j--;
        temp--;
        while (i < r)
        {
            arr[i][j] = temp++;
            if (temp > r * c)
                break;
            i++;
        }
        i--;
        temp--;
        moc_t++;
        while (j - moc_d >= 0)
        {
            arr[i][j] = temp++;
            if (temp > r * c)
                break;
            j--;
        }
        temp--;
        j++;
        moc_d++;
        while (i - moc_t >= 0)
        {
            arr[i][j] = temp++;
            if (temp > r * c)
                break;
            i--;
        }
        i++;
        temp--;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
}