#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,z,n;
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y>>z;
        if((x+y)<=z||(x+z<=y||(y+z)<=x))
            printf("Case %d: Invalid\n",i);
        else if(x==y&&x!=z||y==z&&y!=x||z==x&&z!=y)
            printf("Case %d: Isosceles\n",i);
        else if(x==y&&y==z)
            printf("Case %d: Equilateral\n",i);
        else
            printf("Case %d: Scalene\n",i);
    }

}
