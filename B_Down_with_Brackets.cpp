#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(string s) {

    ll n = s.length();

    if(n==2) {
        cout << "NO";
        return;
    }

    if(n == 4) {
        if(s == "()()") cout << "YES";
        else cout << "NO";
        return;
    }

    string s1 = s.substr(1,n-2);
    ll n1 = s1.length();

    //ll first_half = n_1 / 2;
    //ll count = 1;

    int balance = 0;

    for(ll i=0; i<n1; i++) {
        
        if(s1[i] == ')') balance--;
        else if(s1[i] == '(') balance++;

        if(balance == -1) {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}

int main() {

    int t; cin>>t;
    while (t--) {

        string s; cin >> s;
        solve(s);
        cout << endl;

    }
    return 0;
}