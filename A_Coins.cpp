#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll k){
    //2.x + k.y = n

    if(n%k==0 or n%2==0){
        cout << "YES";
    } else if(((n-k)%2 == 0)) {  // if both n,k are odd or even
        cout << "YES";
    } else {
        cout << "NO";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n,k; cin>>n>>k;
        solve(n,k);
        cout << endl;
    }

    return 0;
}