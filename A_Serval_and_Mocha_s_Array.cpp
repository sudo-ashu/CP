#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int gcd(int a, int b) {

    if(b==0) return a;
    return gcd(b, a%b);
}

void solve(vector<ll> &nums, int n){
    
    bool flag = false;

    for(int i=0; i<n; i++) {
        
        int firstNum = nums[i];
        for(int j=i+1; j<n; j++) {
            
            if(gcd(firstNum, nums[j]) <= 2) {
                flag = true;
                break;
            }
        }
        if(flag == true) break;
    }

    

    if(flag == true) cout << "Yes";
    else cout << "No";
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
    
        // input
        solve(nums, n);
        cout << endl;
    }

    return 0;
}