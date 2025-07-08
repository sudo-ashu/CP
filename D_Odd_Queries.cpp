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
        ll n, q; cin >> n >> q;
        vector<ll> nums(n);

        ll sum_n = 0;

        for(int i=0; i<n; i++) { 
            cin >> nums[i];
            sum_n += nums[i];
        }

        // we will have to use prefix sum...
        vector<ll> prefix_sum(n+1,0);

        for(int i=1; i<=n; i++)
            prefix_sum[i] = prefix_sum[i-1] + nums[i-1];

        
        ll toAdd=0;
        ll toSubtract=0;
        ll newSum=0;

        while(q--) {

            ll l,r,k; cin >> l >> r >> k;

            toAdd = (r - l + 1) * k;
            
            toSubtract = prefix_sum[r] - prefix_sum[l - 1];

            newSum = sum_n - toSubtract + toAdd;

            if(newSum %2 != 0)
                cout << "YES" << endl;
            else cout << "NO" << endl;
            
        }

    }

    return 0;
}