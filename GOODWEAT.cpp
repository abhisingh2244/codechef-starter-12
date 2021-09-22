#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ int cnt=0,a[7];
	    for(int i=0;i<7;i++){
	        cin>>a[i];
	        if(a[i]==1){
	            cnt++;
	        }
	    }
	    if(cnt>=4){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
