#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int seat;
        cin>>seat;
        int start=1;
        int end=100;
        int distance=seat-1;
        if (seat==1||distance<50)
        {
            cout<<"LEFT"<<endl;
        }
        else
        {
            cout<<"RIGHT"<<endl;
        }
        
    }
    
    return 0;
}