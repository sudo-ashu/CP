#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> nums(n);

        for(int i=0; i<n; i++) cin >> nums[i];
    
        if(n%2 == 0) {

            cout << 2 << endl; //no of operations
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl; 

        } else {

            cout << 4 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl; 

        }
    }

    return 0;
}