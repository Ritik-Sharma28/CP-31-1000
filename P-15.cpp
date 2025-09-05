#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0;
        int r = 0;
        int cnt = 0;

        while( r < k){
            if(s[r++] == 'W') cnt++;
        }
        int ans = cnt;
        while(r < n){
            if(s[r++] == 'W') cnt++;
            if(s[l++] == 'W') cnt--;

            ans = min(cnt , ans);

        }

        cout << ans << endl;
        
    }
    return 0;
}
