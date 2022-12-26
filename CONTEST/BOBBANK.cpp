#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int cr=x-y;
        int total=w+(cr*z);
        cout<<total<<endl;
    }
    
    return 0;
}