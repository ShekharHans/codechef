#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int d=1;   
        if (a>b)
        {
            while (a>b)
            {
                a=a-d;
                b=b+d;
            }
            if (a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
            
            
        }
        else
        {
            while (b>a)
            {
                a=a+d;
                b=b-d;
            }
            if (a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
            
            
        }
        
        

    }
    
    return 0;
}