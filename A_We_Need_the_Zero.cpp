#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
     
    while(t--) {
        int n; cin >> n;
        vector<ll> nums(n); 
        for(auto i=0; i<n; i++) cin >> nums[i];
        
        //input

        ll ans = nums[0];

        for(auto i=1; i<n; i++) {
            ans = ans ^ nums[i];
        }

        if(n%2 != 0)
            cout << ans << endl;
        else {
            if(ans != 0) cout << -1 << endl;
            else cout << 2 << endl;
        }

    }

    return 0;
}