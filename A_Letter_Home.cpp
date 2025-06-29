#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

// return the min number of steps in a succesful sequence of steps
// n=1, s=10, nums = [4]
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n,s; cin>>n>>s;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        
        // input
        int countSteps = min(abs(s-nums[0]), abs(s-nums[n-1]));
        countSteps += nums[n-1] - nums[0];

        cout << countSteps << endl;
    }

    return 0;
}