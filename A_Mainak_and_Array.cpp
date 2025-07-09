#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<int> &nums, int n) {
    
    int minVal = *min_element(begin(nums), end(nums));
    int maxVal = *max_element(begin(nums), end(nums));

    int mxAns_1 = maxVal - nums[0];
    int mxAns_2 = nums[n-1] - minVal;

    int ans_1 = max(mxAns_1, mxAns_2);
    
    for (int i=0; i+1<n; i++) ans_1 = max(ans_1, (nums[i]-nums[i+1]));
    
    // here a[n-1] = a[i] in every rotation

    cout << ans_1;
      
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) cin >> nums[i];
        
        // input --
        solve(nums, n);
        cout << endl;
    }

    return 0;
}