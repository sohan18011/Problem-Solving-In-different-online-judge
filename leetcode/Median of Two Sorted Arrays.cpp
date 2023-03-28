#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,nums1[100],nums2[100];
    cin>>n>>m;
    for(int k=0; k<n; k++)
        cin>>nums1[k];
    for(int k=0; k<m; k++)
        cin>>nums2[k];

    int a[n+m+5];
    int i=0,j=0,k=0;
    int l=n+m;
    while(l)

    {

        if(i<n&&j<m)
        {
            if(nums1[i]<nums2[j])
            {
                a[k]=nums1[i];
                i++;
                k++;
            }
            else
            {
                a[k]=nums2[j];
                j++;
                k++;
            }

        }

        else if(i<n)
        {
            a[k]=nums1[i];
            i++;
            k++;

        }
        else if(j<n)
        {
            a[k]=nums2[j];
            k++;
            j++;
        }
        else break;

    }
    // cout<<i<<" "<<j<<' '<<a[k-1]<<endl;
    l--;



//for(int i=0; i<n+m; i++)
//      cout<<a[i]<<' ';

    if((n+m)%2==0)
    {
        int f=(n+m)/2;
        int ff= (a[f-1]+a[f])/2;
        cout<<fixed<<setprecision(5)<<ff<<endl;
    }
    else
        cout<<fixed<<setprecision(5)<<a[(n+m+1)/2-1]<<endl;
    main();

}
