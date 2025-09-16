#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {   ll n;
        cin >> n;
        vector<ll> v(n);
        bool flag = 0;
        unordered_map<ll,ll> freq;
        for ( int i = 0 ; i < n ; i++){
            cin >> v[i];
            freq[v[i]]++;
            if(freq[v[i]] > 1){
                flag = 1;
            }
        }

        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }
    return 0;
}