#include<iostream>
using namespace std;
void task (int input[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (input[i]>=10)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
}

int main()
{
    int n=4;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
        int count;
    task(input,n);
    
    return 0;
}