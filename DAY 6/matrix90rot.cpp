#include <iostream>
using namespace std;
int main()
{
    int a[10][10], m, n, t, low, hig;
    cout << "Enter size of array:";
    cin >> m >> n;
    cout << "Enter array elemnts:\t";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    for (int i = 0; i < m; i++)
    {
        hig = m - 1;
        for (int j = 0; j < n / 2; j++)
        {
            t = a[i][j];
            a[i][j] = a[i][hig];
            a[i][hig] = t;
            hig--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}