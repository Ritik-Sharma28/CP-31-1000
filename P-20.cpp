#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll solve(ll n){
    
    if( n % 4 == 0) return n;
    if( n % 4 == 1) return 1;
    if( n % 4 == 2) return n+1;
    if( n % 4 == 3) return 0;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {  
        ll a , b;
        cin >> a >> b;
        ll XORR = solve(a-1);
        if( XORR  == b){
            
            cout << a  << endl;
        } else if( (XORR^b) != a){
            cout << a + 1 << endl;
        } else {
            cout << a + 2  << endl;
        }
          
    }
    return 0;
}