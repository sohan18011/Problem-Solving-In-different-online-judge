#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x[100], d[100];
    bool spitted = false;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &x[i], &d[i]);
        for (int j = 0; j < i; ++j)
        {
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i])
            {
                spitted = true;
                break;
            }
        }
        if (spitted)
        {
            break;
        }
    }
    if(spitted)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
