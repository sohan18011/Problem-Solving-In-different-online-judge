#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,a,b,c,x,y,z,p=0;
    int d[10];
    cin>>t;

    for(i=0; i<t; i++)
    {
        p=0;
        cin>>a>>b>>c;
        for(x=-100; x<=100 &&p==0; x++)
        {
            for(y=-100; y<=100&&p==0 &&y!=x; y++)
            {
                for(z=-100; z<=100 &&p==0&&z!=y; z++)
                {

                    if(x+y+z==a)
                    {
                        if(x*y*z==b)
                        {
                            if(x*x+y*y+z*z==c)
                            {
                                p=1;
                                d[0]=x;
                                d[1]=y;
                                d[2]=z;
                            }
                        }
                    }
                }
            }
        }
        if(p==0)
            cout<<"No solution.\n";
        else
        {
            sort(d,d+3);
            //for(i=0;i<3;i++)
                cout<<d[0]<<" "<<d[1]<<" "<<d[2]<<endl;
        }
    }



    return 0;
}
