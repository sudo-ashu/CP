#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {

        int n; cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
            cin >> nums[i];
        
        if(nums[0] != 1) {
            cout << "NO" << endl;
            continue;
        } else cout << "YES" << endl;
        
    }


    return 0;
}