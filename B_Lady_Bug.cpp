#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define nl endl
using namespace std;

void solve(string &a, string &b, ll n) {

    ll count_zeros=0;
    ll count_za=0;

    for(ll i=0; i<n; i++) {
        if(a[i] == '0') {
            count_za++;
            count_zeros++;
        }
        if(b[i] == '0') count_zeros++;
    }

    if(count_zeros < n) {
        cout << "NO";
        return;
    }

    if(count_za == n) {
        cout << "YES";
        return;
    }

    if(a == b) {
        cout << "YES";
        return;
    }



    // making arr1 = a0, b1, a2, b3, a4, b5 ... i.e., a-> even and b-> odd
    ll arr1_count=0, arr2_count=0;
    
    for (ll i=0; i<n; i++) {

        if(i%2 == 0) {
            // string a starting
            // if a[i] = '0' then it's good
            // if b[i] = '1' then it won't help ::
            if(a[i] == '1') arr1_count--;
            if(b[i] == '0') arr2_count++;

        } else {


            if(a[i] == '1') arr2_count--;
            if(b[i] == '0') arr1_count++;

        }
    }

    if(arr1_count >= 0 and arr2_count >= 0) cout << "YES";
    else cout << "NO";
}

int main() {

    int t; cin>>t;
    while (t--) {

        ll n; cin >> n;
        string a, b; cin >> a >> b;

        solve(a, b, n);
        cout << nl;

    }
    return 0;
}