#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int num = n-1;

    for(int i=1;i<=n+1;i++) {
        int var=1;
        int var2=i-2;
        if(i==1){
            cout<<"*"<<endl;
            continue;
        }
        for(int j=1;j<i*2;j++){
            if(j==1){
                cout<<"*";
            }
            else if(j>1){
                if(var<i){
                    cout<<var;
                    var++;
                }
                else if(var2>=1){
                    cout<<var2;
                    var2--;
                    if(var2==0){
                        break;
                    }
                }

            }
        }cout<<"*"<<endl;

    }
    for(int i=n;i>=1;i--) {
        int var=1;
        int var2=i-2;
        for (int j = 1; j < i*2; j++) {
            if (j == 1&&i!=1) {
                cout << "*";
            }
            else if(j>1){
                
                if(var<i){
                    cout<<var;
                    var++;
                }
                else if(var2>=1){
                    cout<<var2;
                    var2--;
                    if(var2==0){
                        break;
                    }
                }
            }
        }
        if (i == 1) {
            cout << "*";
        } else {
            cout <<"*"<< endl;
        }
    }
}