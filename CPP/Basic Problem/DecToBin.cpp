#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void init_code(){
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}1
int main()
{
    init_code();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unsigned long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unsigned long long int sum = 0;
        int i = 0;
        for (int j = 1; j < n; j++)
        {
            unsigned long long int res = a[i] * a[j];
            a[i] = res;
            a[j] = 1;
        }
        for (int x = 0; x < n; x++)
        {
            sum += a[x];
        }
        // cout << ans << endl;
        cout << sum*2022 << endl;
    }
    return 0;
}