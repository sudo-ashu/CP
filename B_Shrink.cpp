#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin >> n;
        vector<ll> nums(n);

        
        for(int i=1; i<=n; i+=2)
            cout << i << " ";
        
        if(n%2 != 0)
            n = n-1;
        
        for(int i=n; i>=1; i-=2)
            cout << i << " ";
        
        cout << endl; 
    }

    return 0;
}