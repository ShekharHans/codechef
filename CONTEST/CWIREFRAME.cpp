#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int perimeter=2*(n+m);
        int money=perimeter*x;
        cout<<money<<endl;
    }
    
    return 0;
}