#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n, result = 2000000000;
        cin >> n;
        if(n==0)
            return 0;
        vector<int> store;
        while(result>9)
        {
            int rem = 0;
            while(n>9)
            {
                rem = n%10;
                store.push_back(rem);
                n/=10;
            }
            store.push_back(n);
            result = accumulate(store.begin(), store.end(), 0);
        }
        cout << result << endl;
        store.clear();
    }
}
