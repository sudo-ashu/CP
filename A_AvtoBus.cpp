#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    int t; cin>>t;
    while (t--) {
        // input number is to large
        ll n; cin >> n;
        if(n<4 or n%2 != 0)
            cout << -1;
        else {
            ll max_b = n/4;
            ll min_b = n/6;

            if(n%6 != 0) min_b += 1;

            cout << min_b << " " <<  max_b;
        }
        cout << endl;
    }
    return 0;
}