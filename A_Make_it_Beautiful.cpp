#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];

        // input

        int numToCheck=nums[0], countNum=0;
        for(int i=1; i<n; i++) {
            if(nums[i] == numToCheck) countNum++;
        }

        //cout << " - " << countNum << endl;

        if(countNum+1 == n) {

            cout << "NO" << endl;
            continue;

        } else {
            cout << "YES" << endl;
            
            reverse(nums.begin()+1, nums.end());
            
            for(auto &it: nums) cout << it << " ";
            
            cout << endl;
        }
    }

    return 0;
}