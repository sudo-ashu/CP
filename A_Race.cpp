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
        int a,x,y; cin>>a>>x>>y;

        if(x>=y) swap(x,y);

        if(a>=x and a<=y) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;


    }

    return 0;
}