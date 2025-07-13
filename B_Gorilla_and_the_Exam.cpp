#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


void solve(vector<ll> &nums, ll n, ll k) {

    vector<ll> temp;
    
    //if(n == 1) temp.push_back(1);
    
    ll cnt = 1;
    
    for(ll i=1; i<n; i++) {

        if(nums[i-1] == nums[i])
            cnt++;
        
        else {
        
            temp.push_back(cnt);
            cnt=1;
        }
    }

    temp.push_back(cnt);

    //cout << "temp_size: " << temp.size() << endl;

    //for(auto &it: temp) cout << it << " ";

    sort(begin(temp), end(temp));

    ll ans = 0;

    for(ll i=0; i<temp.size(); i++) {
        
        if(k >= temp[i]) {

            k = k - temp[i];
            temp[i] = 0;

        } else if(temp[i] != 0) ans++;
    }

    cout << ans;
}

int main() {

    int t; cin>>t;
    while (t--) {

        ll n,k; cin >> n >> k;
        vector<ll> nums(n);

        for(ll i=0; i<n; i++) cin >> nums[i];
        
        sort(begin(nums), end(nums));
        // input --
        
        if(n == k) {
            cout << 1 << endl;
            continue;
        }
        
        solve(nums, n, k);
        cout << endl;
    }
    return 0;
}