#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
#define pb push_back
using namespace std;

// minimal number of operations needed to obtain a copy where all elements are equal.


int main() {

    int t; cin>>t;
    while (t--) {
        ll n; cin>>n;

        vector<ll> nums(n);
        unordered_map<ll,ll> freq;

        ll maxFreq = INT_MIN;
        
        for(ll i=0; i<n; i++) {
            cin >> nums[i];
            freq[nums[i]]++;
            
            if(freq[nums[i]] > maxFreq)
                maxFreq = freq[nums[i]];
        }

        if(n==1 or freq.size() == 1) {
            cout << 0 << nl;
            continue;
        }

        // input --
        ll operations = 0;
        ll countOnes=0;
        while (maxFreq < n) {
            operations += 1+min(maxFreq, n-maxFreq);
            maxFreq *= 2;
            countOnes++;
        }
        //cout << "countOnes: " << countOnes << nl;
        cout << operations << nl;

    }
    return 0;
}
