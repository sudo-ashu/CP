#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// if  n > 27 2^n will be greater than m

void solve(ll n, int m) {

    ll a = pow(2, n);
    cout << m % a;
}

int main() {
    
    ll n, m; cin >> n >> m;

    ll log_base_2 = log(m) / log(2);
    
    //cout << log_base_2 << endl;
    
    if(n > 27) {
        cout << m;
    } else {
        solve(n, m);
    }
    // if(log_base_2 < n) { 
    //     cout << m;
    //     return 0;
    // }

    // if(log_base_2 % 2 == 0) {
    //     cout << 0;
    //     return 0;
    // }

    return 0;
}