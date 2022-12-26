#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        double a,x,b,y;
        cin>>a>>x>>b>>y;
        double speed1=a/x;
        double speed2=b/y;
        if (speed1<speed2)
        {
            cout<<"Bob"<<endl;
        }
        else if (speed1>speed2)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Equal"<<endl;
        }
        
        
        
    }
    
    return 0;
}