#include<iostream>
using namespace std;

int ispowerof2(int n)
{
    return(n && !(n &(n-1)));
}
int main()
{
    cout<<ispowerof2(14)<<endl;
}