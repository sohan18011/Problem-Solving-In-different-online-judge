#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    char s[1000];
    scanf("%d",&t);
    cin.get();
    for(i=1; i<=t; i++)
    {
        gets(s);
        n = strlen(s);
        sort(s,s+n);
        do
        {
            puts(s);
        }
        while (next_permutation(s,s+n));
        printf("\n");
    }
}
