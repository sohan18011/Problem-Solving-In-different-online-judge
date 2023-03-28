
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > nums1;
    vector <int > nums2;
    int n,m;
    cin>>n>>m;
    int i,j;

    for(i=0; i<n; i++)
    {
        cin>>j;
        nums1.push_back(j);
    }
    for(i=0; i<m; i++)
    {
        cin>>j;
        nums2.push_back(j);
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>ans;


    i=0;
    j=0;
    while(1)
    {
        //cout<<i<<' '<<j<<endl;
        //cout<<nums1[i]<<' '<<nums2[i]<<endl;

        if(nums1[i]==nums2[j])
        {
            ans.push_back(nums1[i]);
          //  cout<<nums1[i]<<' '<<nums2[i]<<endl;

            i++;
            j++;
        }
        else if(nums1[i]<nums2[j])
        {
           // cout<<nums1[i]<<' '<<nums2[i]<<endl;
            i++;
        }
        else
        {
            //cout<<nums1[i]<<' '<<nums2[i]<<endl;
            j++;
        }

        if(i==n||j==m)
            break;

    }

    for(i=0; i<ans.size(); i++)
        cout<<ans[i]<<' ';
    cout<<endl;

}
