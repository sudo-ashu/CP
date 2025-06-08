#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t; cin>> t;
    
    while(t--) {
        long long n, k; cin >> n >> k;
        string s; cin >> s;

        unordered_map<char, long long> freq;
        for (char& c : s)
            freq[c]++;


        char zero = '0';
        char one = '1';
        
        
        int minPair = max(freq[zero], freq[one])-n/2;
        int maxPair = freq[zero]/2 + freq[one]/2;

        if( k>=minPair and k<=maxPair and (k-minPair)%2 == 0)
            cout << "YES" << endl;
        
        else cout << "NO" << endl;
    }

    return 0;
}