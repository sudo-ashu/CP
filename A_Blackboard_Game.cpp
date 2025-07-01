#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(int n){
    
    if(n<=2) {
        cout << "Alice";
        return;
    }

    if(n%4 == 0) {
        cout << "Bob";
        return;
    }

    cout << "Alice";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        solve(n);
        cout<<endl;
    }

    return 0;
}