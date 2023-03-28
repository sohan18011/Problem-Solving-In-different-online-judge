#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,h=0;
    cin>>n;
    while(n>c+h)
    {
        h++;
        c+=h;
        n-=c;
    }

    cout << h << endl;
    return 0;
}
