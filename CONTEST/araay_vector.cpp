#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            v.push_back(data);
            cout<<data<<" ";
        }
        cout<<endl;
    return 0;
}