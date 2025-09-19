#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0;
        stack<char> st;

        for(int i = 0; i < n ; i++){

            if( s[i] == '('){
                st.push(s[i]);
            }else {
                while(!st.empty() && st.top() != '(') st.pop();

                if( st.empty()) {
                    cnt++;
                    continue;
                } else  {
                    st.pop();
                }
            }
        }

        cnt+=st.size();

        cout << cnt / 2 << endl;
    }
    return 0;
}