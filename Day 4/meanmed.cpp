#include <iostream>
using namespace std;
int mean( s, int n)
{

    for (int i = 1; i <= 5; i++)
    {
        s = (s + n) / 5;
    }
    return s;
}
int main()
{
    int n;
    float s;
    cout << "Enter 5 numbers" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cin >> n;
    }
    mean(s, n);
    cout << "Mean:" << s;
    return 0;
}
