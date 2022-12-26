// #include<iostream>
// #include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int o=n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int max_count=1, res=arr[0],curr_count=1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i]==arr[i-1])
            {
                curr_count++;
            }
            else
            {
                curr_count=1;
            }
            
            if (curr_count>max_count)
            {
                max_count=curr_count;
                res=arr[i-1];
            }
            
        }
        
        int max=0;
        for (int p = 0; p < n; p++)
        {
            if(res==arr[p]){
                max++;
            }
        }
        if (o==max)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<o-max<<endl;
        }
        
    }

    return 0;
}