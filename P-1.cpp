#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int one = 0, zero = 0;
        int ans = 0;

        for ( int i = 0 ; i < s.length() ; i++){
            if( s[i] == '1') one++;
            else zero++;
        }
        for ( int i = 0 ; i < s.length() ; i++){
            if( s[i] == '1') {
                if(zero > 0) zero--;
                else {
                    ans = n - i;
                    break;
                }
            }
            else { 
                if( one > 0) one--;
                else {
                    ans = n - i;
                    break;
                }
        }
        }
        cout << ans << endl;
    }

    return 0;
}