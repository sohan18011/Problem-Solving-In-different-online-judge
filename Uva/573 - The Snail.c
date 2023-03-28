#include<stdio.h>
int main()
{
    double h, u, d, f,climb,down;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4&&h>0)
    {
        int i;
        climb=0;
        down=u*f/100;
        for(i=1; ; i++)
        {
            climb+=u;
            if(climb>h)
            {
                printf("success on day %d\n",i);
                break;
            }

            climb-=d;
            u=u-down;
            if(u<0)
                u=0;
            if(climb<0)
            {
                printf("failure on day %d\n",i);
                break;
            }


        }




    }
}
