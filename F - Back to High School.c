#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int i, a, b, c, k, l, m, sum;
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c && b>c)
        {
            m=a*a; l=b*b; k=c*c;
            sum=k+l;
            if(m==sum)
            {
            printf("Case %d: yes\n", i);
            }
            else
            {
                printf("Case %d: no\n", i);
            }
        }
        else if(c>a && c>b && b>a)
        {
            k=a*a; l=b*b; m=c*c;
            sum=k+l;
            if(m==sum)
            {
            printf("Case %d: yes\n", i);
            }
            else
            {
                printf("Case %d: no\n", i);
            }
        }
        else if(b>a && b>c && a>c)
        {
            k=a*a; m=b*b; l=c*c;
            sum=k+l;
            if(m==sum)
            {
            printf("Case %d: yes\n", i);
            }
            else
            {
                printf("Case %d: no\n", i);
            }
        }

    }

    return 0;
}
