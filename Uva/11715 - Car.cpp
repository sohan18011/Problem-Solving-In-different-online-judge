#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n;
    double u,v,t,a,s;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        else if(n==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=(v*v-u*u)/(2*a);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);

        }
        else if(n==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            s=(v*v-u*u)/(2*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }

        i++;
    }

}
