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
        ll n, k; cin >> n >> k;
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin>> nums[i]; 

        // input --
        if(n==1) {
            cout << 0 << endl;
            continue;
        }

        sort(begin(nums), end(nums));
        
        // for(ll i=0; i<n; i++) cout << nums[i] << " ";
        // cout << endl;

        ll start=1;
        ll maxLen=0;
        ll count=0;
        
        while(start < n) {
            
            if(nums[start] - nums[start-1] <= k) {
            
                count++;
            
            } else {
            
                maxLen = max(maxLen, count);
                count=0;

            }
            start++;
        }
        
        cout << n-1 - max(maxLen, count) << endl;

    }

    return 0;
}