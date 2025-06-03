#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {
        long long x; cin >> x;
        //ans will always be odd
        if(x==1) {
            cout << 3 << endl;
            continue;
        }

        long long val = log2(x);

        long long ways=5;

        cout << ways + 2*(val-1) << endl;
    }

    return 0;
}