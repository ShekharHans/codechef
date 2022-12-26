#include<iostream>
using namespace std;

int GCD(int a,int b){
    int minelem = min(a,b);
    int maxelem = max(a,b);
    int gcd = 2;
    for(int i=2;i<=minelem;i++){
        if(maxelem%i == 0 &&minelem%i == 0){
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int a=10,b=5;
    cout<<GCD(a,b)<<endl;
    return 0;
}