#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int input[100];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {

                if (input[i] == input[i + 1])
                {
                    count = count + 2;
                    input[j]++;
                }
                // else
                // {
                //     cout<<0<<endl;
                // }
                
            }
        }
        cout << count << endl;
    }

    return 0;
}