///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int Tn[n+1];
    for(i=0; i<=n; i++)
    {
        Tn[i]=(i*(i+1))/2;
    }
    for(i=0; i<=n; i++)
    {
        if(Tn[i]==n)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if(i==n && Tn[i]!=n)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
}
