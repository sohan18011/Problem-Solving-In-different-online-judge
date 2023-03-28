#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int n,i,p,a,b,c=0;
    while(getline(cin,s))
    {
        reverse(s.begin(),s.end());
        //cout<<s<<endl;
        if(s[0]=='1'||s[0]=='2'||s[0]=='3'||s[0]=='4'||s[0]=='5'||s[0]=='6'||s[0]=='7'||s[0]=='8'||s[0]=='9'||s[0]=='0')
        {
            for(i=0; i<s.size(); i+=2)
            {

                a=s[i]-48;
                b=s[i+1]-48;
                p=b+a*10;
                //cout<<a<<endl<<b<<endl<<c<<endl;
                if(p<23)
                {
                    c=s[i+2]-48;
                    p=c+b*10+a*100;
                    i++;
                }
                printf("%c",p);
                //cout<<a<<" "<<b<<" "<<" "<<c<<endl<<p<<endl;
            }
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]>='d'&&s[i]<='z')
                {
                    n=s[i];
                    printf("%d%d%d",n%10,(n/10)%10,(n/10)/10);
                }
                else
                {
                    n=s[i];
                    printf("%d%d",n%10,(n/10));
                }
            }
        }
        cout<<endl;
    }
}
