#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
#define pb push_back
using namespace std;

int main() {

    int t; cin>>t;
    while (t--) {

        ll x,n; cin >> x >> n;

        if(x%2) {
            // odd & even
            if(n%2 == 0) {

                if(n%4 == 0) cout << x;
                if(n%4 == 2) cout << x-1;
            }
            // odd & odd
            else {

                if((n+1)%4 == 0) cout << x-n-1;
                else cout << x+n;

            }
            cout << nl;
            continue;

        } else {
            // even & even
            if(n%2 == 0) {
                
                if(n%4 == 0) cout << x;
                if(n%4 == 2) cout << x+1;
            
            }
            // even & odd
            else {

                if((n+1)%4 == 0) cout << x+n+1;
                else cout << x-n;
            }
            cout << nl;
            continue;
        }

    }
    return 0;
}