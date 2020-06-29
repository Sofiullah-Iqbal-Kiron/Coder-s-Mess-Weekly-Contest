#include<stdio.h>

int main()
{
    int c, i, a, b;
    scanf("%d", &c);
    for(i=1; i<=c; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i, a+b);
    }

    return 0;
}
