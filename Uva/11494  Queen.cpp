#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, a, b;
    while(scanf("%d %d %d %d", &x, &y, &a, &b) == 4)
    {
        if(x==0 && y==0 && a==0 && b==0)
            break;
        if(x == a && y == b)
            puts("0");
        else if(x==a||x==b||abs(x-a) == abs(y-b))
           puts("1");
        else
            puts("2");
    }
    return 0;
}

