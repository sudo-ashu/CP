#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

// have to do this in O(log n) max or O(1) time


void solve(string &s, ll n, ll k){
    
    unordered_map<char, int> freq;
    
    for(auto &ch: s)
        freq[ch]++;

    // for(auto it: freq)
    //     cout << it.first << " ";


    // we only want to keep 1 odd occurence in our string so that it can become a palindrome

    ll countOddOccurrences = 0;

    for(auto &it: freq) {
        if(it.second % 2 != 0) {
            countOddOccurrences++;
        }
    }

    // cout << "Odd Occ: " << countOddOccurrences << endl;

    if(countOddOccurrences > k+1)
        cout << "NO";
    else cout << "YES";

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n, k; cin >>n>>k;
        string s; cin >>s;
        solve(s, n, k);
        cout << endl;
    }

    return 0;
}