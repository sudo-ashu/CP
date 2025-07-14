#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// let the array be [4, 9, 2, 5, 8, 4]
// count the number of operations need to make it strictly increasing (a1 < a2 < a3) type. You only can divide any number of your choice by 2 in one ops

void solve(vector<ll> &nums, int n) {

    if(n == 1) {
        cout << 0;
        return;
    }


    int idx = n-1;
    int count = 0;
    ll second_num = nums[1];

    while(idx-1 > 0) {

        ll num = nums[idx];

        if(num == 0) {
            cout << -1;
            return;
        }

        int i = idx-1;
        int cnt = 0;
        ll prev_num = nums[i];

        while (prev_num >= num) {

            prev_num = prev_num / 2;
            cnt++;

        }

        nums[i] = prev_num;
        second_num = prev_num;

        count += cnt;
        idx--;
    }

    if(second_num == 0) {
        cout << -1;
        return;
    }

    if(nums[0] != 0) {
        
        while (nums[0] >= second_num) {
        
            nums[0] = nums[0]/2;
            count++;
        }
    }


    cout << count;


}

int main() {

    int t; cin>>t;
    while (t--) {
        int n; cin >> n;
        vector<ll> nums(n);

        for(int i=0; i<n; i++) cin >> nums[i];
        // input --

        solve(nums, n);
        cout << endl;

    }
    return 0;
}