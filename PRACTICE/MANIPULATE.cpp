#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int input[100];
    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        if (x>=y)
        {
            cout<<"YES"<<endl;
        }

        if(x<y)
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}