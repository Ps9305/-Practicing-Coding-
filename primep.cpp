#include<iostream>
using namespace std;

int main()
{
    int n,i,count =0;
    cout<<"Enter the number";
    cin>>n;
    for (i = 2; i*i < n; i++)
    {
        if(n%i==0)
        {
            //cout<<"Not prime number"<<" ";
            count =1;
            break;
        }
        break;
    }
    if(count==0)
    {
        cout<<"Number is prime number"<<" ";
    }
    else{
       cout<<"Not prime number"<<" ";
    }
    return 0;
}
