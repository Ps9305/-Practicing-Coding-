#include<iostream>
using namespace std;
int swap(int *a ,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return -1;
}
int main()
{
    int a=4;
    int b=2;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}