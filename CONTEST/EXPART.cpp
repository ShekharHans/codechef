#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if (x%2)
        {
            x=(x/2)+1;
        }
        else
        {
            x=x/2;
        }
        
        if (y>=x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}