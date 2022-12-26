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
        int count;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i != j)
                {
                    input[j] = input[i];
                    count++;
                }
                
                
                
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}