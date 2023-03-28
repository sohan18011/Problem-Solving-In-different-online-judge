#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int nums[n+1],val;
    cin >>val;
    for(int i=0; i<n; i++)
        cin>>nums[i];

    int i,j=0,count=0;



    for(i=0; i<n; i++)
    {
        if(nums[i]!=val)
        {
            nums[j] = nums[i];
            j++;

        }
        else
          {
              count++;
              cout<<nums[i]<<" ";
          }
    }
    cout<<endl;
  cout<< count<<" "<<j<<endl;
}
