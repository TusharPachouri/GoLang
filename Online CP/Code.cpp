#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
void init_code()
{
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    // your code goes here
    init_code();
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int arr[num];

        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + num);

        cout << arr[0] << endl;
    }
    return 0;
}