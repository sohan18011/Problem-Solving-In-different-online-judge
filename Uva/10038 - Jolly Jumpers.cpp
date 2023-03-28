#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,ar[3005],arr[3005],i;
    while(scanf("%d",&n)==1)
    {
        c=1;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=0; i<n-1; i++)
        {
            arr[i]=abs(ar[i+1]-ar[i]);
        }
        sort(arr,arr+i);
        for(i=1; i<n; i++)
        {
            if(arr[i]==arr[i-1])
            {
                c=0;
                break;
            }
        }
        if(c==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
