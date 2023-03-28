#include<bits/stdc++.h>
using namespace std;
int factorial(long long int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    long long int n,i,s=1;
    cin>>n;
    s=factorial(n);
    cout<<s<<endl;
}
