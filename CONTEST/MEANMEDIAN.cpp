#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        
        int a,b,c;
        a=y;
        b=y;
        c=(3*x)-(2*y);
        if (a>c)
        {
            int temp=a;
            a=c;
            c=temp;
        }
        
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    
    return 0;
}