#include<iostream>
using namespace std;
void target(){
int x,y;
cin>>x>>y;
int req=x-y;
cout<<req<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        target();
    }
    
    return 0;
}