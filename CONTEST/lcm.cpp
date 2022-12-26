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
int LCM(int a,int b){
    int multi = a*b;
    int lcm = multi/GCD(a,b);
    return lcm;
}
int main()
{
    
    return 0;
}