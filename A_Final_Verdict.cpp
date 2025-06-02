#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {
        int n, x; cin >> n >> x;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        
        long long sum = 0;
        for(auto it: arr)
            sum += it;
        
        if(sum/n == x and sum%n == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}