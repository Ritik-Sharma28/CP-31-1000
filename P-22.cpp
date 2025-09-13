#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while (t--)
    { ll a , b;
        cin >> a >> b;

        if( b > a) {
            cout << 1 << endl;
            continue;
        } 

        int cnt = 0;

        if( b == 1) {
            b++;
            cnt++;
        }

        while(a){
            a/=b;
            cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}