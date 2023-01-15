#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	while(t--){
	    int x,y,x1,y1;
	    cin>>x>>y>>x1>>y1;
	    int bob;
	    int alex;
	    bob = sqrt((x*x)+(y*y));
	    alex = sqrt((x1*x1)+(y1*y1));
	    if(bob>alex){
	        cout<<"BOB"<<endl;
	    }else if(bob==alex){
	        cout<<"EQUAL"<<endl;
	    }else{
	        cout<<"ALEX"<<endl;
	    }
	}
	return 0;
}
