#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>> t;
    
    while(t--) {

        long long n; cin >> n;
        vector<long long> a(n);
        map<long long, long long> freq;

        for (long long i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
            
        if(freq.size() >=3)
            cout << "NO" << endl;

        else {

            long long freq_1 = freq.begin()  -> second;
            long long freq_2 = freq.rbegin() -> second;
            
            long long diff = abs(freq_1 - freq_2);

            if(diff == 0) cout << "YES" << endl;  
            
            else if(n%2 == 1 and diff == 1) cout << "YES" << endl;
            
            else cout << "NO" << endl;
            
        }

    }

    return 0;
}