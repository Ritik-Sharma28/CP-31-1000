#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, R, B;
        cin >> n >> R >> B;
        string s;
        int len = R/(B+1);
        int extra = R%(B+1);
        
        for( int i = 1; i <=(B+1) ; i++){
            for(int j = 0 ; j < len ; j++){
                s.push_back('R');
            }
            
            if( extra){
                s.push_back('R');
                extra--;
            }
            
            if( i != (B+1)){
                s.push_back('B');
            }
        }
           
        cout << s << endl;
    }
    return 0;
}