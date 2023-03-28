#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,nn,j;
    char a[100],b[100],c[100],p,q;
    for(i=0;; i++)
    {
        scanf("%s",&a);
        if(strcmp(a,"*"))
            break;
    }
    scanf("%ch %ch",&b,&c);
    n=strlen(b);
    nn=strlen(c);
    j=0;
    for(i=0; i<n; i++)
    {
        if(!strcmp(b[i],c[i]))
                j++;
    }
printf("%s %s %d\n",b,c,n-j);

}
