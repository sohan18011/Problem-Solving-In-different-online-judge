#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,x,y,i;
    set<int>s;
    cin>>t;
    cin>>x;
    for(i=1; i<=x; i++)
    {
        cin>>a;
        s.insert(a);
    }
    cin>>y;
    for(i=1; i<=y; i++)
    {
        cin>>b;
        s.insert(b);
    }

    if(s.size()==t)
        cout<< "I become the guy." <<endl;
    else
        cout << "Oh, my keyboard!" << endl;

}
