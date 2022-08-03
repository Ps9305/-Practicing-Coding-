#include<iostream>
using namespace std;
int maim(){
    int n=2,isprime=1;
   // cin>>n;
    int i;
    for(i=2; i*i<n; i++){
        if(n%i==0)
       // cout<<"notprime\n";
       // break;
       isprime=0;
    }
    if(isprime){
        cout<<"prime\n";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}