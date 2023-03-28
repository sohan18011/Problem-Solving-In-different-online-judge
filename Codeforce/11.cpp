#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,m,n,j,k,ans=1;

    cin>>n;
    while(n--)

    {
        ll x,y,z,p;
        cin>>x>>y>>z;
        if(z<x)
            cout<<z<<endl;
        else
        {

                p = y/z;
                p++;
                cout<<p*z<<endl;

        }


        }
//            if(i%d==0)
//            {
//                cout<<i<<endl;
//                p=1;
//                break;
//            }
//        }
//        if(p==0)
//        {
//            for(i=r+1;; i++)
//            {
//                if(i%d==0)
//                {
//                    cout<<i<<endl;
//                     p=1;
//                    break;
//                }
//            }
//        }
    }
//main();

