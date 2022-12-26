#include <bits/stdc++.h>
using namespace std;
void negetive()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    bool zero = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            count++;
        }
        if (arr[i] == 0)
        {
            zero = 1;
            break;
        }
    }

    if (zero)
    {
        cout << 0 << endl;
        return;
    }

    if (count % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        negetive();
    }

    return 0;
}