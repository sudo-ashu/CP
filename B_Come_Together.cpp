#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

// initially everyone is at (xa, ya)
// infinite 2D plane
// they have to take the shortest path TOGETHER

ll calculate(ll x, ll y, ll z) {
    
    if(x >= y and x >= z) return min(x-y, x-z);
    if(y >= x and z >= x) return min(y-x, z-x);
    return 0;

}

int main() {
    int t; cin>>t;
    
    while (t--) {

        ll xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        // lies on the same side
        ll ans=0;

        ans = calculate(xa, xb, xc) + calculate(ya, yb, yc) + 1;
        cout << ans << endl;

    }

    return 0;
}