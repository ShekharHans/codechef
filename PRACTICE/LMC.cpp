#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int num=1;
    int lmc, lmc1;
    for (int i = 0; i < n; i++)
    {
        lmc=a*num;
        num++;
        // lmc1=b*num;
        // num++;
    cout<<lmc<<" ";
    // cout<<lmc1<<" ";

    }
    cout<<endl;
    int num1=1;
    for (int j  = 0; j < n;j++)
    {
        lmc1=b*num1;
        num1++;
    cout<<lmc1<<" ";
    }
    cout<<endl;
    
    
    return 0;
}