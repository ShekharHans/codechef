#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int input[100];
    for (int i = 0; i < t; i++)
    {
        cin>>input[i];
    }
    for (int i = 0; i < t; i++)
    {
        int x=100;
        x=x-input[i];
        cout<<x<<endl;
    }
    
    
    return 0;
}