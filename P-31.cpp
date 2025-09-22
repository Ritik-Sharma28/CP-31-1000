#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll n;
    cin >> n;
    string s;
    cin >> s;
    int l = -1;
    int r = -1;
    for( int i = 1 ; i < s.length() ; i++){
        if( (int)s[i-1] > (int)s[i]){
            l = i-1;
            r = i;
            break;
        }
    }

    if( l == -1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << l + 1 << " " <<  r + 1 << endl;
    }

    return 0;
}