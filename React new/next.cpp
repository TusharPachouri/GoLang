#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin>>r;
        char str[r+1];
        cin>>str;
        int count = 0;
        if(str.size()<=3){
            cout<<"YES"<<endl;
        }
        else{
        for (int i = 0; i < r; i++)
        {
            if (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u')
            {

                count++;
                if (count >= 4)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                count = 0;
            }
            if (i == r-1)
            {
                cout << "YES" <<endl;
            }
        }
        }
    }
    return 0;
}
