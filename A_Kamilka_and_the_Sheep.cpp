#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        vector<ll> nums(n);

        for(int i=0; i<n; i++) cin>>nums[i];
        sort(begin(nums), end(nums));

        ll d = abs(nums[n-1] - nums[0]);
        cout << d << endl;
    }

    return 0;
}