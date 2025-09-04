#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v) cin >> i;

        bool flag = 0;
        vector<int> ans;

        for (int i = 0; i < n;) {
            int j = i;
           
            while (j + 1 < n && v[j] == v[j + 1]) j++;

            int len = j - i + 1;

            if (len == 1) {
                flag = 1;
                break;
            }

            ans.push_back(j + 1);
            for (int k = i; k < j; k++) ans.push_back(k + 1);

            i = j + 1; 
        }

        if (flag) cout << -1 << endl;
        else {
            for (auto & x : ans) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
