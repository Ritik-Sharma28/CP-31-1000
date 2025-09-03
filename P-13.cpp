#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector < ll > v(n);
        for (auto & i: v) cin >> i;

        vector < pair < ll, ll >> temp;

        for (int i = 0; i < n; i++) {
            int a = v[i] + x;
            int b = abs(v[i] - x);
            temp.push_back({
                b,
                a
            });
        }
        ll l = temp[0].first;
        ll r = temp[0].second;

        ll cnt = 0;
        for (int i = 1; i < n; i++) {
            l = max(l, temp[i].first);
            r = min(r, temp[i].second);
            if (l > r) {
                cnt++;
                l = temp[i].first;
                r = temp[i].second;

            }

        }

        cout << cnt << endl;
    }

    return 0;
}