#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<int> &nums){
    
    int n=nums.size();
    vector<int> vec(n);

    vec[0] = abs((1+n) - nums[0]);

    for(int i=1; i<n; i++) {
        vec[i] = vec[i-1] + (nums[i-1]-nums[i]);
    }

    for(auto &it: vec) cout << it << " ";
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        
        //input

        solve(nums);
        cout << endl;
    }

    return 0;
}