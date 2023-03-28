#include<stdio.h>
#include<string.h>
int main()
{
    char x[1000];
    int n,i,j=0;
    gets(x);
    n=strlen(x);
    while(i<n)
    {
        if(x[i++]==' ')
            j++;


    }
    printf("%d\n",j);
    return 0;
}
