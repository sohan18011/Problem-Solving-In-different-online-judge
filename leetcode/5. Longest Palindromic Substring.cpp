#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,n,j,st=0,ed=0,ans=1;
    n=s.size();
    //  cout<<n<<endl;

    for(i=0; i<n-1; i++)
    {
        int l=i,r=i;
        while(l>=0&&r<n)
        {
            if(s[l]==s[r])
            {
              //  cout<<s[l]<<' '<<s[r]<<endl;
                l--;
                r++;
            }
            else
                break;
        }

        int len = abs(l-r-1);
        //cout<<len<<' '<<ans<<' '<<l<<' '<<r<<endl;
        if(ans<len)
        {
            st=l+1;
            ed=r-1;
            ans=len;
        }
       // cout<<len<<' '<<ans<<' '<<st<<' '<<ed<<endl;
    }

    for(i=0; i<n-1; i++)
    {
        int l=i,r=i+1;
        while(l>=0&&r<n)
        {
            if(s[l]==s[r])
            {
               // cout<<s[l]<<' '<<s[r]<<endl;
                l--;
                r++;
            }
            else
                break;
        }
        int len = abs(l-r-1);
//cout<<len<<' '<<ans<<' '<<l<<' '<<r<<endl;
        if(ans<len)
        {
            st=l+1;
            ed=r-1;
            ans=len;
        }
      //  cout<<len<<' '<<ans<<' '<<st<<' '<<ed<<endl;
    }

//cout<<st<<' '<<ed<<endl;
for(i=st; i<ans; i++)
    cout<<s[i];
cout<<endl;
main();
}

