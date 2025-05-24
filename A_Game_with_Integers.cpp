#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n==1) cout << "First" << endl;
    else {
        if((n+1)%3 == 0 or (n-1)%3 == 0) cout << "First" << endl;
        else cout << "Second" << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        solve(n);
    }

    return 0;
}