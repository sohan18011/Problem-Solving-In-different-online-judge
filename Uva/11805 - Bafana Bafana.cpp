#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,k,p,s,i =1,j,kk;
    cin>>t;
    while(t--)
    {
        kk=1;
        cin>>n>>k>>p;
        //s=k+p;
        //s=s-n;
        cout<<"Case "<<i<<": ";
        i++;
        for(j=k;;j++)
        {if(j==n)
                j=0;
            if(kk==p)
                break;
            kk++;
          //  cout<<j;

        }
//        if(s==0)
//            cout<<n<<endl;
//        else
            cout<<j+1<<endl;
    }
}
