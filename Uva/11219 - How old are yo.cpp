#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll d,m,y,dd,mm,yy,ss,p,pp,t,i,age;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        char s[10];
        cin>>d>>s[0]>>m>>s[0]>>y;
        cin>>dd>>s[0]>>mm>>s[0]>>yy;
//        p=m*30+d;
//        pp=mm*30+dd;

        cout<<"Case #"<<i<<": ";
        age=y-yy;
        if(mm==m&&dd>d)
            age--;
        if(mm>m)
            age--;
        // if()
        if(age>=130)
            cout<<"Check birth date"<<endl;
        else if(age<0)
            cout<<"Invalid birth date"<<endl;
        else
            cout<<age<<endl;
    }





}
