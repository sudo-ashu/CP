#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define ld long double
#define MOD 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll a,b,x,y;
        cin >> a >> b >> x >> y;

        if( a-1 > b or (a > b and a%2 == 0)) {
            cout << -1 << endl;
            continue;
        }

        if(a-1 == b) {
            cout << y << endl;
            continue; 
        }

        ll minCost = 0;
            
        while(a < b) {
            if(a%2 != 0) minCost = minCost + x;
            else minCost += min(x,y);
            a++;
        }

        cout << minCost << endl;

    }

    return 0;
}