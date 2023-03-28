#include<bits/stdc++.h>
using namespace std;
int main()
{1 2 3 5 6 7 8 10 12 16
    vector<vector<int> > vt( 5, vector<int> (2));
    int i,j,k;
    for(i=0; i<5; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>k;
            vt[i][j]=k;
        }
    }

    int m,n;

    n=vt.size();

    m=vt[0].size();

    // cout<<n<<" "<<m<<endl;
    int first,last;

    vector< vector <int> > nums(10, vector<int>(2));
    int p=0,q=0;

    nums[0][0]=vt[0][0];
    first=vt[0][0];

    last=vt[0][1];

    int a[100];
    a[0]=first;
    q++;
    for(i=1; i<5; i++)
    {
        cout<<vt[i][0]<<' '<<vt[i][1]<<' '<<last<<endl;

        if(last<vt[i][0])
        {
            cout<<'p'<<endl;
            a[q]=last;
            q++;
            a[q]=vt[i][0];
            q++;
            last=vt[i][1];
        }
        else
            last = vt[i][1];

    }
    a[q]=last;
    for(i=0; i<=q; i++)
    {
        cout<<a[i]<<' ';
    }

}
