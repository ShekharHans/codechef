#include<iostream>
using namespace std;
void page(){
    int x;
    cin>>x;
    int page=(x/25);
    int ans;
    if (x%25==0)
    {
        cout<<page<<endl;
    }
    else
    {
        cout<<page+1<<endl;
    }
    

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        page();
    }
    
    return 0;
}