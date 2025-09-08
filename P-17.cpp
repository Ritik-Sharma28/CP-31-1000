#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n--;
        ll msb = log2(n);
        ll num = pow(2,msb) - 1;

        vector<ll> ans;
        
        while( num>=0){
            ans.push_back(num);
            num--;
        }
        num = pow(2,msb);

        while(num <= n){
            ans.push_back(num);
            num++;
        }

        for(auto &i:ans) cout << i << " ";

        cout << endl;
       
    }
    return 0;
}