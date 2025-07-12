#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void solve(vector<ll> &nums, int n, int k) {

    int size = n*k;

    if (k == 1) {
        cout << nums[ceil((1.0*n) / 2)];
        return;
    }

    int idx = (ceil((1.0*n) / 2) - 1) * k + 1;

    ll sum = nums[idx];
    //cout << "first element: " << sum;


    for(int i=2; i<=k; i++) {
        
        idx += n-ceil((1.0*n)/2)+1;
        //cout << " " << nums[idx];
        sum += nums[idx];
    }
    //cout << endl;

    cout << sum;

}

int main() {
    int t; cin>>t;
    
    while (t--) {

        int n, k; cin >> n >> k;
        int size = n*k;
        vector<ll> nums(size+1, 0);
        
        for (int i=1; i<=size; i++) {
            ll a; cin >> a;
            nums[i] = a;
        }

        // input --
        solve(nums, n, k);
        cout << endl;
    }

    return 0;
}