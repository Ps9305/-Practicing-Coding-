#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m,n,p=0,q=0;
	cin>>m>>n;
	int a[m];
	for(int i=0;i<m;i++){
	    cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
	    cin>>b[i];
	}
	while( p<=m &&  q<=n){
	    if(a[p]<b[q]){
	        p++;
	    }
	    else if(a[p]>b[q]){
	        q++;
	    }
	    else if(a[p]==b[q]){
	        cout<<a[p]<<endl;
	        p++;q++;
	    }
	}
	
	return 0;
}
