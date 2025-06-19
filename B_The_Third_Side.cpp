#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin>>n;
        vector<int> nums(n);

        for(auto i=0; i<n; i++) cin >> nums[i];
        
        ll sum=0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }

        cout << sum - (n-1) << endl;
    }

    return 0;
}