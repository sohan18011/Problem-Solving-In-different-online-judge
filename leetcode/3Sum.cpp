#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int i,s,t;
    int a[n+1];
    for(i=0; i<n; i++)
        cin>>a[i];
    vector<vector<int>>result;
    sort(a,a+n);
    for(i=0; i<n-2; i++)
    {
        if(i==0||a[i]==a[i-1])
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum = a[i]+a[j]+a[k];
                if(sum==0)
                {
                    result.push_back({a[i],a[j],a[k]});
                    while(j<k&&a[j]==a[j+1])j++;
                    while(j<k&&a[k]==a[k-1])k--;
                    j++;
                    k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                    j++;
            }
        }
    }
    for(i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<result[i][j]<<' ';
        }
        cout<<endl;
    }
}
