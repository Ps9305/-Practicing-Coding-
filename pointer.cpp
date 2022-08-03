#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30};
    int *ptr=a;
    for (int i = 0; i < 3; i++)
    {
       cout<<*ptr<<endl;
       ptr++;
    }
    return 0;
}