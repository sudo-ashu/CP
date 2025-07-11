#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<ll> &nums, ll n) {


    for(ll i=0; i<n; i++) {

        if(nums[i] < max( i*2, (n-1 - i)*2)) {
            cout << "NO";
            return;
        }
    }

    cout << "YES";


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        
        ll n; cin >> n;
        vector<ll> nums(n, 0);
        
        for(ll i=0; i<n; i++) {
            ll a; cin >> a;
            nums[i] = a-1;
        }

        solve(nums, n);
        cout << endl;
    }

    return 0;
}