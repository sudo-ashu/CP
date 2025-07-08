#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<ll> &nums, ll n) {


    for (ll i=1; i<n; i++) {
        if(nums[i] % nums[i-1] == 0)
            nums[i]++;
        else continue;
    }

    for(ll i=0; i<n; i++)
        cout << nums[i] << " ";

    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin >> n;
        vector<ll> nums(n,0);
        
        for(ll i=0; i<n; i++) {
            int a; cin >> a;
            if(a == 1) nums[i] = a+1;
            else nums[i] = a;
        }

        // input -- 
        solve(nums, n);
        cout << endl;
    }

    return 0;
}