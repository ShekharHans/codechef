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
        // int input2[100];
        int i, j;
        int count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        for (j = 0; j < n; j++)
        {
            cin >> input[j];
        }
        if (i>j)
        {
            while (i>j)
            {
                j=j+1;
                
            }
            if (i==j)
            {
                cout<<count<<endl;
            count++;
            }
            else
            {
                cout<<-1<<endl;
            }
            
            
            
        }
        else
        {
            
            while (i<j)
            {
                i=i+1;
                

            }
            if (i==j)
            {
                cout<<count<<endl;
                count++;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        

        

        
    }

    return 0;
}