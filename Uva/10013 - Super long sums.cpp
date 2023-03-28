#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int t,i,j,s,n,a,b,r=0,m=0;
    char c[10];
    cin>>t;
    vector<long long int >n1;
    vector<long long int >n2;
    vector<long long int >ans;
    while(t--)
    {
        r=0;
        n1.clear();
        n2.clear();
        ans.clear();
//cout<<endl;
       // c[0]='\n';
       if(m!=0)
       cout<<endl;
        cin>>n;
        //cout<<n;
        j=n;
        while(n--)
        {
            cin>>a>>b;
            n1.push_back(a);
            n2.push_back(b);
        }
        if(m!=0)
        cout<<endl;
        m++;
        //cout<<n2[j-1]<<endl;;
        for(i=j-1; i>=0; i--)
        {
            s=n1[i]+n2[i]+r;
            //cout<<s;
            if(s>=10)
            {
                ans.push_back(s%10);
                r=s/10;
            }
            else
            {
                ans.push_back(s);
                r=0;
            }
        }
        if(r!=0) ans.push_back(r);
        for(i=ans.size()-1; i>=0; i--)
            cout<<ans[i];
    }
    cout<<endl;

 //   cout<<c[0];
}
//

//}
