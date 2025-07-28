#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
#define pb push_back
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> nums(n);

        for(int i=0; i<n; i++) cin >> nums[i];

        // input --
        // sort(begin(nums), end(nums));

        bool flag = false;

        for(int i=1; i<n; i++) {
            int a = nums[i-1], b = nums[i];
            if(min(a,b) > max(a,b)/2) flag = true;
        }

        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;

    }

    return 0;
}