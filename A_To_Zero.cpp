#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n, k; cin>>n>>k;
        if(n==k) {
            cout << 1 << endl;
            continue;
        }

        ll ways = 0;
        //case: n is odd
        if(n%2!=0) {
            n = n - k;
            ways = 1;
        }
        // now n is even regradles of input
        
        
        if(n%(k-1) != 0) {
            ways += n/(k-1) + 1;
            cout << ways << endl;
            continue;
        }
        else
            cout << n/(k-1)+ways << endl;
    }

    return 0;
}