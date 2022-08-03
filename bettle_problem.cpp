#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
int pt_x,pt_y,pt_z;
float short_dist(int x,int y,int z);
int main()
{
int i,N,a[50],x,y,z;
float sum = 0.0;
cin>>N;
N = 3 * N;
for(int i = 0;i <N;i++){
    cin>>a[i];
}
int pt_x = a[0];
int pt_y = a[1];
int pt_z = a[2];
for(int i = 3;i<N;i=i+3)
{
sum = sum + short_dist(a[i],a[i+1],a[i+2]);
}
printf("%.2f",sum);
return 0;
}
float short_dist(int x,int y,int z)
{
float dis = 0.0;
if(z == pt_z && (x == pt_x || y == pt_y) && pt_z != 0)
{
if(x != pt_x){
dis = (2 * PI * (abs(x-pt_x)))/6.0;
}
else{
dis = (2 * PI * (abs(y-pt_y)))/6.0;
}
}
else{
dis = (sqrt(pow(x-pt_x,2) + pow(y-pt_y,2)) + abs(z -pt_z));
}
pt_x = x;
pt_y = y;
pt_z = z;
return dis;
}