#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

// spectator of the 1st match = spectator of the k-th match 
// k=1
// player - A,B,C
// C -> spectator of the first match

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {

        ll k; cin >> k;

        // a_n = a + (n-1)d where d = 3 and n must be an integer
        ld check_n = ((ld)k-1)/3 + 1.0;
        //cout << check_n << endl;
        if(check_n == (ll) check_n) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}