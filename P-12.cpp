#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll n, k , b , s;
        cin >> n >> k >> b >> s;

        if(n*k > s){
            cout << -1 << endl;
            continue;
        }

        if( n*k == s){
           cout << n*k << " ";
           n--;
           while(n--) cout << 0 << " ";
           cout << endl;
           continue;
        }

        if( (n+1)*k > s){
            cout << s << endl;
            continue;
        }

        vector<ll> ans;
        ans.push_back((n+1)*k - 1);

        n--;
        ll rem = s - (n+1)*k - 1 ;
        while(n--){
            if( rem > (k-1) ){
                ans.push_back(k-1);
            } else {
                ans.push_back(rem);
            }
        }
        if(n!=0){
            cout << -1 << endl;
            continue;
        }

        for(auto&i:ans){
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
