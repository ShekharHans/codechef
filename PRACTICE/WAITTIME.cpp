#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,x,y;
        cin>>k>>y;
        x=k*7;
        int days=x-y;
        cout<<days<<endl;
    }
    return 0;
}