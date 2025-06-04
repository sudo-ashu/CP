#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        
        for(int i=0; i<n-1; i++)
            cin >> arr[i];
        
        long long sum=0;
        for(auto &it: arr)
            sum += it;
        cout << -1*sum << endl;
    }

    return 0;
}