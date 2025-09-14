#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll next_prime ( ll n){
    for( ll i = n;; i++){
        bool isPrime = true;
        
        for( int j = 2 ; j*j <=i ; j++){
            if( i %j == 0){
                isPrime = 0;
                break;
            }
        }
        
        if( isPrime) return i;
        
    }
}


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {   ll d;
        cin >> d;
        ll p = next_prime(1+d);
        ll q = next_prime( p + d);
        cout << min( p*p*p , p*q) << endl;
    }
    return 0;
}