#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int ans=y*2;
    if (ans>=x)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}