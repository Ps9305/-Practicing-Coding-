#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    return k;
}
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;i<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}