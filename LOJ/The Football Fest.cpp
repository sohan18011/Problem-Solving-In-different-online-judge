#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,bb,j,x=0,y=1;;
    char s[110];
    cin>>t;
    while(t--)
    {
        // y=1;
        stack<long long int>b;
        // x=0;
        cin>>n;
        cin>>a;
        b.push(a);
        while(n--)
        {
            // if(y==1)
            cin>>s[0];
            if(s[0]=='P')
            {
                //cout<<n<<endl;
                cin>>bb;
                b.push(bb);
                // x=0;
                //y=1;
            }
            //cout<<b.top()<<endl;
            if (s[0] == 'B')
            {
                if (b.empty())
                    continue;
                x=b.top();
                b.pop();
                if (b.empty())
                    continue;
                y = b.top();
                b.pop();
                b.push(x);
                b.push(y);
            }
        }
        cout<<"Player "<<b.top()<<endl;

    }
    return 0;
}
