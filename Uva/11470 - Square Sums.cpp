#include<stdio.h>
int A[11][11];

int main()
{
    int n,i,j,k=1,a,b,sum;

    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&A[i][j]);

        printf("Case %d:",k++);
        for(a=0,b=n-1;a<=b;a++,b--)
        {
            if(a==b)
            {
                printf(" %d",A[a][b]);
                break;
            }

            sum = 0;
            for(i=a;i<=b;i++)
                sum += A[a][i] + A[i][a] + A[b][i] + A[i][b];
            sum -= A[a][a] + A[a][b] + A[b][a] + A[b][b];
            printf(" %d",sum);
        }
        printf("\n");
    }
    return 0;
}
