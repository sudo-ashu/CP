#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<ll> &nums, int n, ll a, ll initialTime){
    
    ll timer = 0;
    
    for (int i=0; i<n; i++) {

        if(nums[i] >= a)
            timer += a-1;
        
        else timer = timer + nums[i];
    
    }

    cout << initialTime + timer;
    
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll a,b; cin>>a>>b;
        int n; cin>>n;

        vector<ll> nums(n);
        
        for (int i=0; i<n; i++) cin >> nums[i];

        solve(nums, n, a, b);
        cout << endl;
    }

    return 0;
}