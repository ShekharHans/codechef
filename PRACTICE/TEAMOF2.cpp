#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int input[100];
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>input[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k <=j; k++)
                {
                    int di=n/2;
                    cout<<input[di];
                }
                
            }
            
        }
        
        
    }
    
    return 0;
}