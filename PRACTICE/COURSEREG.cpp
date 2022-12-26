#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int m,k;
        cin>>m>>k;
        int curr=m-k;
        if (curr>=n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        
    }
    
    return 0;
}