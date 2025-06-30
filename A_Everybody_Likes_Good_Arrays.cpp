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
        int n; cin>>n;
        vector<ll> nums(n);
        

        int countEve=0, countOdd;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            
            if(nums[i]%2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }

        // input
        if(n==1) {
            cout << 0 << endl;
            continue;
        }

        int idx = 1;
        int countAns = 0;

        for(int i=0; i+1<n; i++) {
            if(nums[i] == nums[i+1]) countAns++;
        }

        cout << countAns << endl;
    }

    return 0;
}