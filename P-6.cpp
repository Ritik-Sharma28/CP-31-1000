#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n , k , q;
        cin >> n >> k >> q; 
        vector<ll> v(n);
        for(auto &i:v) cin >> i;
        ll ans = 0;
        ll l = 0;
        ll r = 0;
        ll cnt = 0;
        while( r < n){
            if( v[r] <= q) cnt++;
            else {
                if( cnt >= k){
                    ans += (r-l + 1);
                }
                l = r;
                cnt = 0;
            }
            
            r++;
        }

        cout << ans << endl;
        

    }

    return 0;
}
