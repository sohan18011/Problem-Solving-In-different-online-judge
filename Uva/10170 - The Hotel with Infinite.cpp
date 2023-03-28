#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a,b,s;
    while(cin>>a>>b)
    {
        s=0;
        i=a;
        while(1)
        {
            s=s+i;
            if(s>=b)
            {
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }
}
