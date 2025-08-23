#include <bits/stdc++.h>

using namespace std;

int find( int &n , int &k){
    int ans = 0;
    for ( int i = 0 ; i <= 6 ; i++ ){
        if( (n + i)% k  == 0){
            ans = i;
            break;
        }
    }
    return ans;
}


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n , k;
        cin >> n >> k;
        vector<int> v(n);
        int diff = INT_MAX;
        bool flag = false;
        int cnt = 0;
        for ( int i = 0 ; i < n; i++){
           cin >> v[i];
            if( v[i] % k == 0) flag = true;

            diff = min( diff , find(v[i] , k));
            
            if( v[i] % 2 == 0) cnt++;
            
        }
        
        if( k == 4){
            if( cnt >= 2){
                diff = min(diff , 0);
            } else if ( cnt == 1) {
                diff = min(diff , 1);
            } else {
               diff = min(diff , 2);
            }
        }

        if(flag) cout << 0 << endl;
        else cout << diff << endl;
        
    }

    return 0;
}