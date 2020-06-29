/// Operation fail

#include<iostream>
using namespace std;

int main()
{
    int n, k, i;
    long long int value=1, c;
    string n_fact;
    cin >> n;
    cin >> n_fact;
    k=n_fact.length();
    if(n%k!=0)
        c=k;
    else
        c=n%k;

    for(i=n; i>=c; i-=k)
    {
        value*=i;
    }
    cout << value << endl;

    return 0;
}
