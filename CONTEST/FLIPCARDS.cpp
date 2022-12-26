#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int y=n-x;
        cout<<min(x,y)<<endl;
        
    }
    return 0;
}