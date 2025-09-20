#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a , b;
        cin >> a >> b;

        if( a == b){
            cout << 0 << endl;
            continue;
        }

        if( a > b){
            swap(a,b);
        }
        ll cnt = 0;

        while( a < b ){
            if( a*8 <= b){
                a*=8;
                cnt++;
            } else {
                break;
            }
        }
        while( a < b ){
            if( a*4 <= b){
                a*=4;
                cnt++;
            } else {
                break;
            }
        }
         while( a < b ){
            if( a*2 <= b){
                a*=2;
                cnt++;
            } else {
                break;
            }
        }
        
       if( a == b){
            cout << cnt << endl;
       }else {
        cout << -1 << endl;
       }
    }
    return 0;
}