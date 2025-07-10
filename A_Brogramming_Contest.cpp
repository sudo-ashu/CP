#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(string s, int n) {

    int count = 0;

    for (int i=1; i<n; i++) { 

        if(s[i] != s[i-1]) count++;
    }

    //cout << endl;

    //cout << "count of changes: " << count << endl;

    if(s[0] == '1') {

        if(count == 0) cout << 1;
        else cout << count + 1;

    } else cout << count;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        solve(s, n);
        cout << endl;
    }

    return 0;
}