#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long int
int main()
{
    double x1,y1,x2,y2,x3,y3,x,y,z,p,r,s;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        x=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        y=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        z=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        p=(x+y+z)/2;
        s=sqrt(p*(p-x)*(p-y)*(p-z));
        r=x*y*z/4/s;
        printf("%.2lf\n",2*3.141592653589793*r);
    }
}
