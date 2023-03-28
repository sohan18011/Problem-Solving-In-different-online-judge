#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,arr[100000];
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int s=0;
        scanf("%d%d",&x,&y);
        for(int j=0; j<x; j++)
        {
            scanf("%d",&arr[j]);
            s=s+arr[j];
        }
        if(s%y==0)
            printf("Divisible\n");
        else
            printf("Not divisible\n");

    }
}
