#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// my arg -> if Vika's position is in diagonal with any of her friend's position
// then she is busted.

// actual argument -> if the dist between vika and her friend is even then is busted else
// she can escape.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n, m, k; cin >> n >> m >> k;

        bool flag = false;

        // cout << xi << " " << yi << endl;
        vector<pair<int, int>> plane(k+1,{0,0});

        for(int i=0; i<k+1; i++) {

            int a, b; cin >> a >> b;
            plane[i] = {a,b};
        }


        for (int i=1; i<k+1; i++) {

            int dist = abs(plane[0].first - plane[i].first) + abs(plane[0].second - plane[i].second);
            
            if(dist % 2 == 0) {
                
                flag = true;
                cout << "NO" << endl;
                break;

            }

        }

        if(!flag) cout << "YES" << endl;
    }

    return 0;
}