#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j;
    cin>>n;
    int nums[n+1];
    for(i=0; i<n; i++)
        cin>>nums[i];

    int cnt=0;
    for(i=0; i<n; i++)
    {
        if(nums[i]!=0)
        {
            nums[cnt]=nums[i];
            cnt++;
        }
    }



    for(i=cnt; i<n; i++)
        nums[i]=0;

    for(i=0; i<n; i++)
        cout<<nums[i]<<' ';
    cout<<endl;

    main();

}
