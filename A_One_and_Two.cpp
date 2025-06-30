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
        vector<int> nums(n);
        
        int count2s=0;
        
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            if(nums[i] == 2) count2s++;
        }

        // input

        if(count2s == 0) {
            cout << 1 << endl;
            continue;
        }
        
        if(count2s % 2 != 0) { 
            cout << -1 << endl;
            continue;
        }
        
        count2s = count2s/2;

        int mid2=0, result=0;

        for(int i=0; i<n; i++) {
            
            if(nums[i] == 2) {
                
                mid2++;
                if(mid2 == count2s) {
                    result = i+1;
                    break;
                }

            }
        }

        cout << result << endl;
    }

    return 0;
}