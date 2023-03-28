
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,ss,ans;
    char c[10];
    while(1)
    {
        cin>>h;
        cin>>c[0];
        cin>>m;
        if(h==0&&m==0)
            break;
        s=h*30+(m/60)*30;
        ss=m*6;
        ans=(s-ss);
        if(ans<0)
            ans*=-1;
        else
            ans=360-ans;
        if(ans>180)
            ans=ans-360;
        cout<<setprecision(3)<<fixed<<abs(ans)<<endl;

    }
}
