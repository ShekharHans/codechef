#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
    
    
    int arr[4];
        int count=0,pos;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        int num=1;
        if (arr[i]==num)
        {
            count++;
            
        }
        
        
    }
    if (count==0)
    {
        cout<<"IN"<<endl;
    }
    else 
    {
        cout<<"OUT"<<endl;
    }
    
    }
    return 0;
}