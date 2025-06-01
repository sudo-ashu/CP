#include<bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power (int n, long long p) {
    //base case
    if(p == 1)
        return n;
    long long temp = power(n, p/2);
    temp = ((temp % MOD) * (temp % MOD)) % MOD;

    if(p%2 == 0) return temp % MOD;
    return (temp % MOD) * n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> permute1(n);
        vector<int> permute2(n);

        for(int i=0; i<n; i++)
            cin >> permute1[i];
        
        for(int i=0; i<n; i++)
            cin >> permute2[i];
        
        vector<int> ans(n);
        ans[0] = power(2, permute1[0]) + power(2, permute2[0]);
        
        //Couldn't do it___________will try later for sure!
    }

    return 0;
}