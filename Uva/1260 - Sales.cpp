#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T, n, A[1001];
    ll i, j;
    cin>>T;
    while(T--)
    {
        cin>>n;;
        ll ans = 0, tmp;
        for(i = 0; i < n; i++)
        {
            cin>>tmp;
            for(j = i-1; j >= 0; j--)
                if(tmp < A[j])
                    A[j+1] = A[j];
                else
                    break;
            A[j+1] = tmp;
            ans += j+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
