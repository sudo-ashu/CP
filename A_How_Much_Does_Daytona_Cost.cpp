#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        unordered_map<int, int> freq;

        for(int i=0; i<n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        //input done
        
        if(freq[k] == 0) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}