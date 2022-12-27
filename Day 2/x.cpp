#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, m, k, x;
    cin >> t;
    while (t > 0)
    {
        cin >> n >> m >> k >> x;
    }
    while (t > 0)
    {
        if (k % 4 == 0)
        {
            if (n + m <= x - 1)
                cout << "Yes";
            else
                cout << "No";
        }
        else
            return 0;
    }

    return 0;
}