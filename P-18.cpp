#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {  
        ll w , h ;
        cin >> w >> h;
        ll N = 2;
        ll area = INT_MIN;
        while(N--){
            ll k ;
            cin >> k ;

            vector<ll> v(k);
            for(auto&i:v) cin >> i;

            ll s = v[0];
            ll e = v[k-1];

            ll temp = (e-s)*h;
            area = max(area , temp);

        }

        N = 2;

         while(N--){
            ll k ;
            cin >> k ;

            vector<ll> v(k);
            for(auto&i:v) cin >> i;

            ll s = v[0];
            ll e = v[k-1];

            ll temp = (e-s)*w;
            area = max(area , temp);

        }

        cout << area << endl;
       
    }
    return 0;
}