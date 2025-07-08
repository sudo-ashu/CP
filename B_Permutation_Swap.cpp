#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ll gcd (ll a, ll b) {
    if(a == 0)
        return b;
    return gcd (b % a, a);
}

void solve(vector<ll> &nums, ll n){
    
    // vector<ll> temp = nums;
    // sort(begin(temp), end(temp));

    vector<ll> posChange;

    for(ll i=0; i<n; i++) {
        ll temp = abs(nums[i]-(i+1));
        if(temp != 0) posChange.push_back(temp);
    }

    ll ans = posChange[0];

    sort(begin(posChange), end(posChange));

    for(ll i=1; i<posChange.size(); i++) {
        ans = gcd(ans, posChange[i]);
    }

    cout << ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin >> n;
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];

        // input --
        solve(nums, n);
        cout << endl;

    }

    return 0;
}