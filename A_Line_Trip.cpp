#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &gasStations, int n, int x){
    
    int maxDiff = gasStations[0];
    for (int i=1; i<n; i++) {
        int diff = gasStations[i]-gasStations[i-1];
        maxDiff = max(maxDiff, diff);
    }

    int lastDiff = 2 * (x-gasStations[n-1]);
    if(lastDiff > maxDiff) {
        cout << lastDiff << endl;
        return;
    } else cout << maxDiff << endl;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> gasStations(n);

        for(int i = 0; i < n; i++)
            cin >> gasStations[i];
        
        solve(gasStations, n, x);
    }

    return 0;
}