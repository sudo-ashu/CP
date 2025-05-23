#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n, k; cin >> n >> k;

        vector<int> nums(n);
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<int> temp = nums;
        
        sort(temp.begin(), temp.end());
        
        if (temp == nums) {
            cout << "YES" << endl;
            continue;
        } 
        if (k == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}