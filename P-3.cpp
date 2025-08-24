#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n , k;
        cin >> n >> k;
        vector<ll> a(n);
        for(auto&i:a) cin >> i;
        vector<ll> b(n);
        for(auto&i:b) cin >> i;
        vector<pair<ll,ll>> v(n);
        for(int i = 0 ;i < n ; i++){
            v[i] = {b[i],a[i]};
        }
        
        
        ll cost = k;
        ll cnt = 1;
        
        sort(v.begin() , v.end());
        for(int i = 0 ;i < n ; i++){
           
           if( v[i].first >= k) break;
           
           if( v[i].second + cnt > n){
               
               cost+=(n-cnt)*v[i].first;
               cnt = n;
               break;
           } else {
               cnt+=v[i].second;
               cost+=v[i].first*v[i].second;
           }
           
        }
        
        cost+=(n-cnt)*k;

        cout << cost << endl;
 
    }

    return 0;
}
