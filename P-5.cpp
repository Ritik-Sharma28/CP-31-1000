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
        vector<ll> v(n);
        vector<pair<ll,ll>> idx;
        for ( int i = 0 ; i < n ; i++){ ;
            cin >> v[i];
            idx.push_back({v[i] , i + 1});
        }
        
        for ( int i = 0 ; i < n ; i++){ 
            if(idx[i].first % k == 0){
                idx[i].first = k;
            } else {
                 idx[i].first =idx[i].first % k ;
            }
        }

        sort(idx.begin() , idx.end(), [](pair<ll,ll> &a, pair<ll,ll> &b){
            if(a.first != b.first)
             return a.first > b.first;
            return a.second < b.second;
        });
        
        for ( int i = 0 ; i < n ; i++){ 
            cout << idx[i].second << " " ;
        }

        cout << endl;

    }

    return 0;
}
