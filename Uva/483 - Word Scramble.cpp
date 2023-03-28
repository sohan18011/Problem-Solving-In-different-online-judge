#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,j,q,l;
    char s[1000];
    while(gets(s))
    {
        l=strlen(s);
        s[l++]=' ';
        s[l]='\0';
        j=0;
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
            {
                q=(i-1);
                for(p=q; p>=j; p--)
                    cout<<s[p];

                if(i!=(l-1))
                    cout<<" ";
                j=i+1;

            }
        }

        printf("\n");
    }
    return 0;
}

