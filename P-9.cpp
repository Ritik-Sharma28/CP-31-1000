#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll A = 1 , B = n-1;
        for ( ll i = 2 ; i*i <=n ; i++){
            if( n % i == 0){
                A = n/i;
                B = n-A;
                break;
            }
        }
        

        cout << A << " " << B << endl;
       
    }

    return 0;
}
