#include<bits/stdc++.h>
using namespace std;
void fact(int n){
    if(n<0){
        cout<<"Factorial does not exist"<<endl;
    }
    else if(n==0||n==1){
        cout<<"1"<<endl;
    }
    else{
        int k=1;
        for(int i=1;i<=n;i++){
            k=k*i;
        }
        cout<<k<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}