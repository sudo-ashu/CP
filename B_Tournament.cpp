#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(vector<ll> &nums, ll n, ll j, ll k){
    
    int playerCheck = nums[j-1];

    set<ll> st;

    for(auto it: nums)
        st.insert(it);

    if(*max_element(begin(st), end(st)) == playerCheck) {
        cout << "YES";
        return;
    }

    if(k != 1) {
        cout << "YES";
        return;
    }

    cout << "NO";

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n,j,k; cin>>n>>j>>k;
        vector<ll> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];

        //input
        solve(nums, n, j, k);
        cout << endl;

    }

    return 0;
}