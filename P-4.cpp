#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n; 
        vector<ll> second_min;
        ll first_min = INT_MAX;
        for ( int i = 0 ; i < n ; i++){
            ll m;
            cin >> m;
            vector<ll> v(m);
            for(auto&i:v) cin >> i;
            sort(v.begin() , v.end());

            first_min = min ( first_min , v[0]);
            second_min.push_back(v[1]);
        }
        sort(second_min.begin(), second_min.end());

        ll sum = accumulate(second_min.begin() , second_min.end(), 0LL);

        ll ans = sum + first_min - second_min[0];
        
        cout << ans << endl;
 
    }

    return 0;
}
