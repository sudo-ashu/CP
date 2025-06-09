#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll x,y; cin >> x >>y;
        if((x - (y-1))>0 and (x - (y-1))%9 == 0) {
            cout << "Yes" << endl;
            continue;
        }
        if(y == x+1) {
            cout << "Yes" << endl;
            continue;
        }
        //11,12; 22,23; 33,34; 44,45; 55,56; 66, 67
        else cout << "No" << endl; 
    }

    return 0;
}