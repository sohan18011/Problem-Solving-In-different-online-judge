#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count= 0,n,i;
    cin >>n >> s;
    for(i=1; i< n; i++ )
    {
        if(s[i]==s[i-1])
            count++;
    }

    cout << count << endl;
    return 0;
}
