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
        if(n<=2) {
            cout << n+1 << endl;
            continue;
        }

        //16%3=1 and 16%5=1 + 17%3=2 and 17%5=2 but 18%3=0 and 18%5=3
        if(n%15==0) {
            cout << 3*(n/15) + 1 << endl;
            continue;
        }

        ll rem=n%15;
        n=n/15;

        if(rem<=2) 
            cout << 3*n + rem+1 << endl;
        else
            cout << 3*(n+1) << endl;
    }

    return 0;
}