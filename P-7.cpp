#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n ;
        cin >> n ; 
        vector<ll> a(n);
        for(auto &i:a) cin >> i;
        vector<ll> b(n);
        for(auto &i:b) cin >> i;
        vector<ll> va(2*n +1, 0);
        vector<ll> vb(2*n + 1, 0);
        va[a[0]]++;
        vb[b[0]]++;
        ll cnta = 0;
        ll cntb = 0;
        for ( int i = 1 ; i < n ; i++){
            if( a[i] == a[i-1]){
                cnta++;
            } else if( a[i] != a[i-1]){
                va[a[i -1]] = max(va[a[i-1]] , cnta + 1);
                cnta = 0;
            }

            if( b[i] == b[i-1]){
                cntb++;
            } else if( b[i] != b[i-1]){
                vb[b[i-1]] = max(vb[b[i-1]] , cntb + 1);
                cntb= 0;
            }

        }
        int N = n-1;
        va[a[n-1]] = max(va[a[n-1]] , cnta + 1);
        vb[b[n-1]] = max(vb[b[n-1]] , cntb + 1);
        ll ans = INT_MIN;

        for ( int i = 0 ; i < 2*n + 1 ; i++){
           ans = max (ans , va[i] + vb[i]);
        }
       
        cout << ans << endl;

    }

    return 0;
}
