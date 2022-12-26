#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int pay;
        if (x>=300)
        {
            pay=x*10;
            cout<<pay<<endl;
        }
        else{
            cout<<3000<<endl;
        }
        
    }
    
    return 0;
}