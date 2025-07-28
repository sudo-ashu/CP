#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
#define pb push_back
using namespace std;

void solve(string s) {

    if(stol(s) % 33 == 0) {
        
        cout << "YES";
        return;
    } else {
        cout << "NO";
    }
}

int main() {

    int t; cin>>t;
    while (t--) {
        string x; cin >> x;
        solve(x);
        cout << nl;
    }
    return 0;
}