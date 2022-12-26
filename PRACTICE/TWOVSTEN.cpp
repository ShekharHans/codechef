#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int n = x * 2;
        if (n % 10 == 0)
        {
            if (x % 10 != 0)
            {
                cout << (n / x) - 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
            else
            {
                cout << -1 << endl;
            }
        }
        return 0;
    }