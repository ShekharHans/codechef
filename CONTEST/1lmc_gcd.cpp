#include <bits/stdc++.h>
using namespace std;
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int GCD(int a, int b)
{
    int minelem = min(a, b);
    int maxelem = max(a, b);
    int gcd = 1;
    for (int i = 1; i <= minelem; i++)
    {
        if (maxelem % i == 0 && minelem % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int LCM(int a, int b)
{
    int multi = a * b;
    int lcm = multi / GCD(a, b);
    return lcm;
}
void func(int input[], int n)
{

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (GCD(input[i], input[j]) == LCM(input[i], input[j]))
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        int input[100];
        for (int i = 0; i < n; i++)
        {
            
            cin >> input[i];
            
        }
        func(input,n);
        
    }
    return 0;
}
