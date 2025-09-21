#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    { ll n;
      cin >> n;
      vector<ll> v(n);
      for( auto &i:v) cin >> i;

      sort( v.rbegin() , v.rend());


      for( int i = 0 ; i < n ; i++){
            cout << v[i] << " ";
      }
      cout << endl;

    }
    return 0;
}