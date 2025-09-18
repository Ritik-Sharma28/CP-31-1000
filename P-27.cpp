#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n){
    ll temp = n;

    while( temp){
        if( n %( temp % 10) != 0) return false;
        temp/=10;
    }
    return 1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {   
       ll n;
       cin >> n;
       

       while(1){
        if( check(n)) {
            break;
        }
        n++;
       }

       cout << n << endl;

    }
    return 0;
}