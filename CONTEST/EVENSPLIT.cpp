#include<iostream>
using namespace std;
void Rearange(char str[],int n){
    if (str[0]=='\0')
    {
        return;
    }
    if (str[0]=='0'&&str[1]!='0')
    {
        swap(str[0],str[1]);
    }
    else{
    Rearange(str+2,n);
    }
    cout<<str<<endl;
}
int main()
{
    int n;
    cin>>n;
    char str[100];
    cin>>str[n];
    Rearange(str,n);
    return 0;
}