#include<stdio.h>
#include<math.h>

int main()
{
    float pi;
    float r, rsquare, Asquare, Acircle, shadow;
    pi = 2*acos(0.0);
    int T;
    scanf("%d", &T);
    int i;
    for(i=1; i<=T; i++)
    {
        scanf("%f", &r);
        rsquare = r*r;
        Asquare = 4*rsquare;
        Acircle = pi*rsquare;
        shadow = Asquare-Acircle;
        printf("Case %d: %.2f\n", i, shadow);
    }
}
