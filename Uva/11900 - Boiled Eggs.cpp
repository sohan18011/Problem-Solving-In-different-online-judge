#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,a,b,c,d[1000],t=1;
    cin>>n;
    while(n--)
    {
        int s=0;
        cin>>a>>b>>c;
        i=1;
        while(i<=a)
        {
            scanf("%d",&d[i]);
            i++;
        }
        k=0;
        for(i=1; i<=a && i<=b; i++)
        {
            s+=d[i];
            if(s>c)
                break;
            k++;
        }
        cout<<"Case "<<t<<":"<<k<<endl;
        t++;
    }
    return 0;
}
