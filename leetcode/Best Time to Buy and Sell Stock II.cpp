#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,prices[n+5];

    for(i=0; i<n; i++)
        cin>>prices[i];

    int profit = 0, buy =prices[0];

    for(i=1; i<n; i++)
    {
        if(prices[i]<prices[i-1])
        {
            profit += prices[i-1]-buy;
            buy = prices[i];
        }
    }

    profit+=prices[n-1]-buy;
    cout<<profit<<endl;
    main();
}
