#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int input[100];
    
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (b>=a && c<=b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        
    }


    return 0;
}