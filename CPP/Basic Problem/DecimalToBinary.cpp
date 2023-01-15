//By using vectors

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int bin = 0;
    vector<int> res;
    while (num)
    {
        int rem = num % 2;
        // bin = bin  + rem;
        res.push_back(rem);
        num /= 2;
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] ;
    }

    return 0;
}