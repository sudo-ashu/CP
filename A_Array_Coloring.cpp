#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int &n){
    vector<int> nums(n);
    ll sum=0;
    for(int i=0; i<n; i++) {
        cin>>nums[i];
        sum += nums[i];
    }

    if(sum%2 == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        solve(n);
    }

    return 0;
}