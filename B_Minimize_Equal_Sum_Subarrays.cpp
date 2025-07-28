#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
#define pb push_back
using namespace std;

void solve(vector<int> &nums,int n) {
    for(int i=1; i<n; i++) cout << nums[i] << " ";
    cout << nums[0];
}

int main() {

    int t; cin>>t;
    while (t--) {
        int n; cin >> n;
        vector<int> nums(n);

        for(int i=0; i<n; i++) cin >> nums[i];

        // move each element by one
        solve(nums, n);

        cout << nl;
    }
    return 0;
}