#include<stdio.h>
#include<string.h>
int main()
{
    char x[1000];
    int n,i,j=0;
    while(gets(x))
    {
        j=0;
        n=strlen(x);
        for(i=0; i<n; i++)
        {
            if(isalpha(x[i]) && !isalpha(x[i+1]))
                j++;
        }
        printf("%d\n",j);
    }

    return 0;
}
