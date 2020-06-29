#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int i;
    for(i=1; i<=T; i++)
    {
        int sum=0, N;
        scanf("%d", &N);
        int a[N];
        int j;
        for(j=0; j<N; j++)
        {
            scanf("%d", &a[j]);
            if(a[j]>=0)
            {
                sum = sum+a[j];
            }
            else
            {
                continue;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
