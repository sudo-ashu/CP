#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        long long a, b, x; cin >> a >> b >> x;
        
        if(a > x){
            cout << "NO" << endl;
            continue;
        }
        
        x = x % (a+b);

        if(x < a) {
            cout << "NO" << endl;
        } else cout << "YES" << endl;

    }

    return 0;
}