#include<iostream>
#include<string>
using namespace std;
bool check(int n,char str[]){
    if (n<=3)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char str[100];
        cin>>str;
        int output=check(n,str);
        if (output==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}