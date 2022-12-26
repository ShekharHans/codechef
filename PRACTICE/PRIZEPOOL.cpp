#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int money=(10*x)+(90*y);
        cout<<money<<endl;
    }
    
    return 0;
}