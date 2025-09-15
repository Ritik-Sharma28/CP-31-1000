#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {   ll m , n;
        cin >> m >> n;
        ll neg = 0;
        ll sum = 0;
        ll mini = INT_MAX;

        vector<vector<ll>> v(m, vector<ll>(n, 0));

        for( int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> v[i][j];
                if( v[i][j] <= 0) neg++;

                mini = min ( mini , abs(v[i][j]));
                sum+=abs(v[i][j]);
            }
        }

        if( neg % 2 == 0){
            cout << sum << endl;
        } else {
            cout << sum - mini << endl;
        }
    }
    return 0;
}