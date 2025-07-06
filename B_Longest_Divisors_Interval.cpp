#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// have to find the max length of consecutive multiples of n
// n=2 (1,2) ans = 2
// n=4 (1,2) ans = 2
// n=6 (1,2,3) ans = 3
// n=8 (2,4) ans = 2

void solve(ll &n) {


    if(n % 2 != 0) {
        cout << 1;
        return;
    }

    ll ans=2;
    ll divisor=3;
    while(n % divisor == 0) {
        divisor++;
    }

    cout << ans + divisor-3;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin >> n;
        solve(n);
        cout << endl;
    }

    return 0;
}