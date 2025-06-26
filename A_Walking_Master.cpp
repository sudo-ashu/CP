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
        ll x1,y1,x2,y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        

        if(y2 < y1) {
            cout << -1 << endl;
            continue;
        }

        int moves = y2-y1;
        x1 += moves; //x also increases by this much in the same direction.
        
        if(x1 < x2) {
            cout << -1 << endl;
            continue;
        }

        moves += (x1-x2);
        cout << moves << endl;
    }

    return 0;
}