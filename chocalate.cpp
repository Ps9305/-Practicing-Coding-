#include<iostream>
using namespace std;
int main(){
    int n,i=0,j=0;
    cin>>n;
    int a[n],b[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    j=0;
    i=0;
    do
    {
        if(a[i]!=0){
            b[j]=a[i];
            i++;
            j++;
        }
        else{
            i++;
        }
    }while(i!=n);
    for(j=0;j<n;j++){
        cout<<b[j]<<" ";
    }
    return 0;

}
