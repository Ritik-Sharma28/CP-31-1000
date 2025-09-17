#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ceil_(ll a , ll b){
    return (a+b-1)/b;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {   
        ll x , y , k;
        cin >> x >> y >> k;

        ll sticks_req = y*k + k - 1;

        ll ans = ceil_(sticks_req , x-1);
        ans+=k;

        cout << ans << endl;

    }
    return 0;
}