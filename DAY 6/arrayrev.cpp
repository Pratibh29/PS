#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j, t;
    cout << "Enter size of array:";
    cin >> n;
    cout << "Enter array elements:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    j = n - 1;

    for (int i = 0; i < n / 2; i++)
    {

        t = a[i];
        a[i] = a[j];
        a[j] = t;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}
