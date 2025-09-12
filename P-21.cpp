#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b;
        cin >> b;
        int alen = a.length();
        int blen = b.length();
        int len = 0;

        for (int i = 0; i < alen; i++) {
            for (int j = 0; j < blen; j++) {
                if (a[i] == b[j]) {
                    int k1 = i, k2 = j;
                    while (k1 < alen && k2 < blen && a[k1] == b[k2]) {
                        k1++;
                        k2++;
                        len = max(len, k1 - i);
                    }
                }
            }
        }


        if (len == 0) {
            cout << alen + blen << endl;
        } else {
            cout << alen - len + blen - len << endl;
        }
    }
    return 0;
}