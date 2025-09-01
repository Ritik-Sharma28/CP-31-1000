#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{ 
    ll n , d;
    cin >> n >> d;
    vector<int> v(n);
    for(auto&i:v) cin >> i;
    sort(v.begin(), v.end());
    ll ans = 0;

    int N = n;

    for( int i = n-1 ; i >= 0 ; i--){
        ll mem = (d + v[i] -1 ) / d ;
        if( mem <=N){
            ans++;
            N-=mem;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
