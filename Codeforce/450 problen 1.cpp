#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0,x,y,n,cn=0,j;
    cin>>n;
    j=n;
    while(j--)
    {
        cin>>x>>y;
        if(x<0)
            cn++;
        else
            i++;
    }
    if(i==n||i==(n-1)||cn==n||cn==(n-1))
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;

}
