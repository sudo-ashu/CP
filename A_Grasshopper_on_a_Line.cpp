#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {

        int x, k; cin >> x >> k;

        if(k>x) {
        
            cout << 1 << endl;
            cout << x << endl;
            continue;
        
        } else {

            if(x%k == 0) {
                
                cout << 2 << endl << x-k+1 << " " << k-1 << endl;
                continue;

            } else {
                cout << 1 << endl << x << endl;
                continue;
            }
        }
    }

    return 0;
}