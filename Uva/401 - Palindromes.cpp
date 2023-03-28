#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char s[1000],m[1000];
    string a,b;
    int i,j;
    memset(m,NULL,sizeof(m));
    m['A']='A';
    m['E']='3';
    m['H']='H';
    m['I']='I';
    m['J']='L';
    m['L']='J';
    m['M']='M';
    m['O']='O';
    m['S']='2';
    m['T']='T';
    m['U']='U';
    m['V']='V';
    m['W']='W';
    m['X']='X';
    m['Y']='Y';
    m['Z']='5';
    m['1']='1';
    m['2']='S';
    m['3']='E';
    m['5']='Z';
    m['8']='8';
    while(cin>>s)
    {
        a=b="";
        j=strlen(s);
        for(i=j-1; i>=0; i--)
        {
            a+=s[i];
            b+=m[s[i]];
        }
        if(s==a&&s==b)
            printf("%s -- is a mirrored palindrome.\n\n",s);
        else if(s==a&&s!=b)
            printf("%s -- is a regular palindrome.\n\n",s);
        else if(s!=a&&s==b)
            printf("%s -- is a mirrored string.\n\n",s);
        else
            printf("%s -- is not a palindrome.\n\n",s);



    }
}
