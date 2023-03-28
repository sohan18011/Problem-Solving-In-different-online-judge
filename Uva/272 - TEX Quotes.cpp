#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10005];
    int i,n,j=0;
    while(gets(s))
    {
        n=strlen(s);
        for( i=0; i<n; i++)
        {

            if(s[i]=='"')
            {
                j++;
                if(j%2!=0)
                    printf("``");
                else if(j%2==0)
                    printf("''");
            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;

}
