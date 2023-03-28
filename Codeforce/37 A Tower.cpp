#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[1005]={0},n,m,p,s,ss;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        a[s]+=1;
    }
    m=*max_element(a,a+1005);
    p=1005-count(a,a+1005,0);
    cout<<m<<" "<<p<<endl;
}
