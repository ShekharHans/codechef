#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int time=a*60;
        int game=time/20;
        cout<<game<<endl;
    }
    return 0;
}