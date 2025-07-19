#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;

        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        
        int ans = nums[0];

        for(int i=1; i<n; i++) {
            ans = (ans & nums[i]);
        }

        cout << ans << nl;
    }

    return 0;
}