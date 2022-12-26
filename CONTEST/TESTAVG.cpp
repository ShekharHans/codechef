#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d,e,f;
        d=(a+b)/2;
        e=(b+c)/2;
        f=(c+a)/2;
        if (d<35||e<35||f<35)
        {
            cout<<"Fail"<<endl;
        }
        else
        {
            cout<<"Pass"<<endl;
        }
        
        
        
        
    }
    
    
    return 0;
}