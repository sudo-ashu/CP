#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<ll> &nums, int n){

    int count_odd=0, count_even=0;

    for (int i=0; i<n; i++) {
        if(nums[i]%2 == 1) count_odd++;
        else count_even++;
    }

    if(count_even == 0) {
        cout << count_odd-1;
        return;
    }

    cout << 1 + count_odd;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<ll> nums(n);

        for(int i=0; i<n; i++) cin >> nums[i];

        solve(nums, n);

        cout << endl;
    }

    return 0;
}