#include<bits/stdc++.h>
using namespace std;

long long solve(int num, long long p){
    if(p==0) return 1;

    long long res = solve(num, p/2);

    if(p%2 != 0)
        return res * res * num;
    else
        return res*res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {
        long long n; cin >> n;
        if(n==1) {
            cout << 1 << endl;
            continue;
        }
        
        //neu
        long long val = log2(n); //will return 3 for n=8 and till n=15
        //cout << val << endl;
        cout << solve(2, val) << endl;
    }

    return 0;
}