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
        
        if (a > b)
        {
            while (b < a)
            {
                b = (b * 2);
            }
        
            if (b==a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else 
        {
            while (a < b)
            {
                a = (a * 2);
            }
        
            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}