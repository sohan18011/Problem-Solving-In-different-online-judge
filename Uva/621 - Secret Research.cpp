#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l;
    char x[1000];
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        gets(x);
        l=strlen(x);
        if(x[0]=='1'&&l==1||x[0]=='4'&&l==1||x[0]=='7'&&x[1]=='8'&&l==2)
            printf("+\n");
        else if(x[l-1]=='5'&&x[l-2]=='3')
            printf("-\n");
        else if(x[0]=='9'&&x[l-1]=='4')
            printf("*\n");
        else if(x[0]=='1'&&x[1]=='9'&&x[2]=='0')
            printf("?\n");

    }
}
