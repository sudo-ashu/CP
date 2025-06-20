#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<ll> nums(n);
        
        for(int i=0; i<n; i++) cin >> nums[i];

        bool flag = false;
        
        ll minDiff = INT_MAX;

        for(int i=1; i<n; i++) {
            if(nums[i] < nums[i-1]) {
                flag = true;
                break;
            }
            minDiff = min(minDiff, nums[i]-nums[i-1]);
        }

        if(flag == true) {
            cout << 0 << endl;
            continue;
        }
        else
            cout << minDiff/2 + 1 << endl;

    }

    return 0;
}