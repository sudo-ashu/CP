#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
#define nl endl
#define pb push_back

// (1 ≤ n ≤ 100, 2 ≤ m ≤ 100)
// (1 ≤ xi ,yi ≤ m−1)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {

        int n, m; cin >> n >> m;
        ll perimOg = 4*m;
        
        for(int i=1; i<=n; i++) {

            int x, y; cin >> x >> y;
            
            if(i==1) continue;

            perimOg += (4*m - 2*(2*m-(x+y)));
        
        }

        cout << perimOg << nl;

    }

    return 0;
}