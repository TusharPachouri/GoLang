#include <iostream>
using namespace std;
 int main(){
    int t;
    cin>>t;
    int chk=t;
    int pre;
    int forw=0,back=0;
    while(t--){
        int num;
        cin>>num;
        if(t==chk){
            pre=num;
            continue;
        }
        if(pre>num){
            forw++;
        }else if(num<pre){
            back++;
        }else{
            forw=0;
            back=0;
        }pre=num;
    }if(forw==chk||back==chk){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0; 
 }