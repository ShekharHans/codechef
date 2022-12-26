#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,q,p;
        cin>>x>>q>>p;
        int pas=q-p;
        int total=pas*x;
        cout<<total<<endl;
    }
    
    return 0;
}