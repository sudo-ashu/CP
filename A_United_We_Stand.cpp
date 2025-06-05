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
        vector<long long> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];

        sort(rbegin(nums), rend(nums));
        int largestNum=nums[0];
        
        int cnt=0;
        for(int i=0; i<n; i++) {
            if(nums[i] != largestNum) {
                break;
            } cnt++;
        }

        if(cnt == n) {
            cout << -1 << endl;
            continue;
        }

        sort(begin(nums), end(nums));

        cout << n-cnt << " " << cnt << endl;
        for(int i=0; i<n-cnt; i++) cout << nums[i] << " ";
        cout << endl;
        for(int i=n-cnt; i<n; i++) cout << nums[i] << " "; //12 12 8 4 4
        cout << endl;

    }
    return 0;
}