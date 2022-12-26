#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int income;
        cin>>income;
        if (income>100)
        {
            cout<<income-10<<endl;
        }
        else
        {
            cout<<income<<endl;
        }
        
    }
    return 0;
}