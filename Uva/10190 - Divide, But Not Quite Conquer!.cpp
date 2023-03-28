#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,s,arr[1000];
    while(scanf("%d %d", &x, &y) == 2)
    {
        if(y<=1||x<y)
        {
            printf("Boring!\n");
            continue;
        }
        i=0;
        while(x%y==0&&x>=y)
        {
            arr[i++]=x;
            x=x/y;

        }
        arr[i]=x;
        if(arr[i]!=1||i==0)
            printf("Boring!\n");
        else
        {
            for(j=0; j<i; j++)
                printf("%d ",arr[j]);
            printf("%d\n",arr[i]);


        }
    }
}
