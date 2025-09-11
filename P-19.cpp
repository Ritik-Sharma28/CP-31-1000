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
            vector<ll> v(n);
            for(auto&i:v) cin >> i;

            vector<pair<ll,ll>> paired;

            for( int i = 0; i < n ; i++){
                paired.push_back({v[i] , i});
            }

            sort(paired.rbegin() , paired.rend());

            ll minutes = 0;
            vector<ll> ans(n+1,0);
            ans[0] = 0;
            ll coordinate = 1;
            

            for( int i = 0 ; i < n ; i++){
                  ans[paired[i].second + 1] = coordinate;
                  minutes+=(paired[i].first)*abs(coordinate)*2;
                  if( coordinate < 0){
                    coordinate = abs(coordinate) + 1;
                  } else {
                    coordinate = - coordinate;
                  }
            }
            
            cout << minutes << endl;


             for( int i = 0 ; i < n+1 ; i++){
                 cout << ans[i] << " ";
            }

            cout << endl;

       
    }
    return 0;
}