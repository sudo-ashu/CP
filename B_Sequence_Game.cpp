#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        
        vector<int> nums(n);
        
        for(auto i=0; i<n; i++)
            cin >> nums[i];
        
        vector<int> ans;
        ans.push_back(nums[0]);

        
        for (auto i=1; i<n; i++) {
            if(nums[i-1] > nums[i]) {
                ans.push_back(nums[i]);
                ans.push_back(nums[i]);
            } else {
                ans.push_back(nums[i]);
            }
        }
        cout << ans.size() << endl;
        
        for(auto &it: ans)
            cout << it << " ";
        cout << endl;

    }

    return 0;
}