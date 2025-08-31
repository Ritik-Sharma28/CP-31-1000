#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {  int n;
        char ch;
       cin >> n >> ch;
       string s;
       cin >> s;
      if( ch == 'g') {
          cout << 0 << endl;
          continue;
      }
       int ans = 0;
       s+=s;
       for( int i = 0 ;i < 2*n ; i++){
         if( s[i] == ch){
            int cnt =  1;
            i++;
            while(i < 2*n && s[i] != 'g'){
                cnt++;
                i++; 
            }
             if(n > 1)
             ans = max(ans , cnt);
         }
       }

       cout << ans << endl;
    }

    return 0;
}
