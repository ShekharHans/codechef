#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string str1="START38";
        string str2 ="LTIME108";
        string str3;
        int count=0;
        int count1=0;
        for (int  i = 0; i < n; i++)
        {
            getline(cin,str3);
        }
        for (int i = 0; i < n; i++)
        {
            if (str3[i]==str1)
            {
                count++;
            }
            cout<<count<<endl;
            if (str3[i]==str2)
            {
                count1++;
            }
            cout<<count1<<endl;
        }
        
        
        getline(cin,str3);
        
        
    }
    return 0;
}