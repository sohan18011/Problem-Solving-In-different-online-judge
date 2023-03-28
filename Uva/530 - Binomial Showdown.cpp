#include <bits/stdc++.h>
using namespace std;

//long long a[5001][5001];
#define ll long long int
int main()
{
    ll n, k,ans;
    while (1)
    {
        cin>>n>>k;
           if(k==0&&n==0)
               break;
        ans = 1;
        if (k > (n / 2))
            k = n - k;

        for (int i = 0; i < k; i++)
        {
            ans *= (n - i);
            ans /= (1 + i);
        }

        cout<<ans<<endl;
    }

    return 0;
}
