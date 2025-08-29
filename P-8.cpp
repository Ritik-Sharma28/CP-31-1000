#include <bits/stdc++.h>

using namespace std;

#define ll long long

int count(vector<int> &v){
    int cnt = 0;
    for(auto &i:v) i+=cnt;

    return cnt;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> l(26,0);
        vector<int> r(26,0);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            r[s[i] - 'a']++;
        }

        for (int i = 0; i < n; i++)
        {   l[s[i] -'a']++;
            r[s[i] - 'a']--;
            ans = max(ans , count(l) + count(r));
        }
        cout << ans << endl;
    }

    return 0;
}
