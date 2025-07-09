#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<ll> &nums, vector<ll> &zeroIdx, ll n) {
    
    ll k = zeroIdx.size();
    ll countFront=0;
    ll countRear=0;

    if(k == n) {
        cout << 0;
        return;
    }
    
    if(k==0 || (k==1 and (zeroIdx[0]==0 or zeroIdx[0]==n-1)) || (k==2 and (zeroIdx[0]==0 and zeroIdx[0]==n-1))) {
        cout << 1;
        return;
    }

    else {

        for(ll i=0; i<n; i++) {
            if(nums[i] == 0) countFront++;
            else break;
        }

        for(ll i=n-1; i>=0; i--) {
            if(nums[i] == 0) countRear++;
            else break;
        }

        if(countFront+countRear == k) cout << 1;
        
        else cout << 2;

        return;
    } 
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin >> n;
        vector<ll> nums(n);

        vector<ll> zeroIdx;

        for(ll i=0; i<n; i++) {
            cin >> nums[i];
            if(nums[i] == 0) zeroIdx.push_back(i);
        }

        // input --
        solve(nums, zeroIdx, n);
        cout << endl;
    }

    return 0;
}