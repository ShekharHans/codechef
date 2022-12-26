#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int frd,slice;
        cin>>frd>>slice;
        int total=frd*slice;
        int req=total/4;
        if (total%4==0)
        {
            cout<<req<<endl;
        }
        else
        {
            cout<<req+1<<endl;
        }
        
    }
    
    return 0;
}