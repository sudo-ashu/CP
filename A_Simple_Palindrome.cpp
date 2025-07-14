#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(int n) {

    string s = "aeiou";

    int new_length = n / 5;
    int to_add = n % 5;

    string ans = "";

    for(int i=0; i<new_length; i++) ans += s;

    ans = ans + s.substr(0, to_add);
    sort(begin(ans), end(ans));
    cout << ans;
}

int main() {

    int t; cin>>t;
    while (t--) {
        
        int n; cin >> n;
        
        solve(n);

        cout << endl;

    }
    return 0;
}