#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int input[100];
        int n,d;
        cin >> n;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> d;
            if (d>=1000)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
        

        
    }

    return 0;
}