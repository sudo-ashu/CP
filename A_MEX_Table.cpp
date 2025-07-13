#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(ll n, ll m){

    cout << max(m, n) + 1;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n, m;
        cin >> n >> m;

        solve (n, m);
        cout << endl;
    }

    return 0;
}