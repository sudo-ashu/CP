#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> freq;

        for(int i=0; i<n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        cout << freq.size() << endl;   
    }
    return 0;
}