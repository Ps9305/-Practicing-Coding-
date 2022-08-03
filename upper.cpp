#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="fghdfgyhudssgfujhd";

    //convert to upper case:
   /* for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i] -= 32;
        }
        cout<<s1<<endl;
    }*/
    //using library function;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

    cout<<s1<<endl;

    return 0;
}