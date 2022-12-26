#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a=x*4;
        int b=y*2;
        int c=z*0;
        int ans = a+b+c;
        cout<<ans<<endl;
    }
    
    return 0;
}