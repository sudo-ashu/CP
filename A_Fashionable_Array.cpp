#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr.begin(), arr.end());

        int cntFor=0;
        int cntBack=0;
        int ans=0;

        if((arr[0] + arr[n-1])%2 == 0) {
            cout << ans << endl;
            continue;
        }

        //smallest is even and largest is odd for eg: 2,11
        if(arr[0]%2 == 0) {

            for(int i=0; i<n-1; i++) {
                if(arr[i]%2 != 0) break;
                cntFor++;
            }

            for(int i=n-1; i>=1; i--) {
                if(arr[i]%2 == 0) break;
                cntBack++;
            }

            ans= min(cntBack, cntFor);
        
        } else {

            for(int i=0; i<n-1; i++) {
                if(arr[i]%2 == 0) break;
                cntFor++;
            }

            for(int i=n-1; i>=1; i--) {
                if(arr[i]%2 != 0) break;
                cntBack++;
            }
            ans= min(cntBack, cntFor);

        }
        

        cout << ans << endl;
    }

    // 2 4 5 6 9 11  2+11=13
    // cnt = 1 4 5 6 9 11  4+11=15
    // cnt = 2 5 6 9 11  5+11=16
    return 0;
}