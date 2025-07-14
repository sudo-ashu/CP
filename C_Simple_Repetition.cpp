#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

bool isPrime(ll n) {

    if(n == 1 or (n>2 and n%2==0))
        return false;

    if(n == 2) return true;

    ll cnt=0;

    // skipping 4, 6, 8, ...
    for(ll i=3; i*i<=n; i+=2) {
        if(n % i == 0) cnt++;
    }

    if(cnt>0) return false;
    return true;
}

void solve(ll n, int k) {

    if(n==1) {
        if(k==2) cout << "YES";
        else cout << "NO";
        return;
    }

    if(k>1) {
        cout << "NO";
        return;
    }

    if(isPrime(n)) {
        cout << "YES";
        return;
    }

    cout << "NO";
}

int main() {

    int t; cin>>t;
    
    while (t--) {

        ll n; cin >> n;
        int k; cin >> k;

        solve(n, k);
        cout << endl;

    }
    return 0;
}