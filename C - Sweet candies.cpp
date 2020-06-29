#include<iostream>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        int r, g, b, days=0;
        cin >> r >> g >> b;
        if(r>g && b>g)
        {
            while(r>1 && b>1)
            {
                r--; b--;
                days++;
            }
            while(g>0)
        }

        cout << days;
    }
}
