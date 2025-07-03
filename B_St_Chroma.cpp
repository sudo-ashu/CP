#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n,x; cin >>n>>x;
        
        if(n==1){
            cout << 0 << endl;
            continue;
        }

        if(n == x) {
            for(auto i=0; i<n; i++) cout << i << " ";
            cout << endl;
            continue;
        }

        vector<ll> temp(n);

        for(int i=0; i<n; i++)
            temp[i] = i;    
        
        ll tempNum = temp[n-1];
        temp[n-1]  = x;
        temp[x]    = tempNum;

        for(auto it: temp) cout << it << " ";
        cout << endl;
    }

    return 0;
}