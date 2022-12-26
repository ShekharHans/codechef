#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int input [30];
    for (int i = 0; i < t; i++)
    {
        cin>>input[i];
    }
    for (int i = 0; i < t; i++)
    {
        int x;
        x=input[i]*2;
        cout<<x<<endl;
        
    }
    
    
    return 0;
}