#include<stdio.h>

int main()
{
    int T, n, m, i, j, m2, nm, val[n];;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d", n, m);
        m2=m*2;
        if(n%m2==0)
        {
            nm=n/m;
            for(i=1; i<=n; i++)
            {
                for(i=1; i<=nm; i++)
                {
                    val[i-1]=-i;
                }
            }

        }
    }
}
