#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int input[100];
    for (int i = 0; i < t; i++)
    {
        cin >> input[i];
    }
    for (int i = 0; i < t; i++)
    {

        if (input[i] > 1 && input[i] <= 100)
        {
            cout << input[i] << endl;
        }

        if (input[i] > 100 && input[i] <= 1000)
        {
            cout << input[i] - 25 << endl;
        }
        if (input[i] > 1000 && input[i] <= 5000)
        {
            cout << input[i] - 100 << endl;
        }
        if (input[i] > 5000)
        {
            cout << input[i] - 500 << endl;
        }
    }

    return 0;
}