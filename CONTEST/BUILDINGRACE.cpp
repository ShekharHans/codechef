#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        float t1=a/x;
        float t2=b/y;
        if (t1>t2)
        {
            cout<<"Chefina"<<endl;
        }
        else if (t1<t2)
        {
            cout<<"Chef"<<endl;
        }
        else
        {
            cout<<"Both"<<endl;
        }
        
    }
    return 0;
}