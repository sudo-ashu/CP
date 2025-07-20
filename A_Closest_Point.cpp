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
        int n; cin >> n;

        vector<ll> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        
        //bool flag = false;

        if (n==2 and nums[1]-nums[0]>1) {
            cout <<"YES" << endl;
        }

        else cout << "NO" << endl;


        // for(int i=1; i<n; i++) {

        //     if((nums[i] - nums[i-1]) == 1) {
        //         flag = true;
        //         break;
        //     }

        // }

        // if(flag == true) {
        //     cout << "NO" << endl;
        //     continue;
        // }

        // ll a1 = nums[0], a2 = nums[n-1];
        // cout << (a1+a2)/2;

        // cout << "NO" << endl;

    }

    return 0;
}