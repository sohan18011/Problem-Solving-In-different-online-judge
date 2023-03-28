#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>num;
    vector<int>result;
    int n,nn;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>nn;
        num.push_back(nn);
    }

    int t;
    cin>> t;

    int b=0,s;
    for(auto it1 = num.begin(); it1!=num.end(); ++it1)
    {
        for(auto it2=it1+1; it2!=num.end(); it2++)
        {
            s=*it1+*it2;
            if(s==t)
                cout<<it1-num.begin()<<" "<<it2-num.begin()<<endl;


        }
    }
    //  cout<<endl;


}
