#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int maxCount = 0;
        for (int i = 0; i < n; i++)
        {
            int count=0;
            // cout<<"Test"<<endl;
            for (int j = 0; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                }
            }
            if(count>maxCount){
                maxCount = count;
            }
            // cout<<maxCount<<endl;
        }
        cout<<n-maxCount<<endl;
        
    }
    
    return 0;
}