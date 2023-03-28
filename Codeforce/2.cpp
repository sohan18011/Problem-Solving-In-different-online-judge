#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,d;
    cin>>d;
    while(d--)
    {
        cin>>n;
        cout<<(n*(n-1)*(n-2)*(n-3)/24 + n*(n-1)/2 + 1)<<endl;;
    }
}
