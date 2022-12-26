#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a >= b)
        {
            cout << b << endl;
            ;
        }
        else if (a < b)
        {
            cout << a << endl;
        }
    }

    return 0;
}