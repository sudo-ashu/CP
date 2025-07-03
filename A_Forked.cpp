#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

// Chess Game
// a,b == movement type of the knight (ghoda)

// ans can be 0, 1 or 2

vector<ll> dir_x = { 1, -1 , -1, 1}, dir_y = { 1, 1 , -1, -1}; 

int main() {
    int t; cin>>t;
    while (t--) {

        ll a,b,x1,y1,x2,y2;
        cin >>a>>b>>x1>>y1>>x2>>y2;
        
        // for getting unique positions always
        set<pair<ll, ll>> king_hits, queen_hits;

        //set is useful as insertion, deletion and findings are ofr O(log n) tc


        for(auto i=0; i<4; i++) {
            king_hits.insert({x1+dir_x[i]*a, y1+dir_y[i]*b});
            king_hits.insert({x1+dir_x[i]*b, y1+dir_y[i]*a});

            queen_hits.insert({x2+dir_x[i]*a, y2+dir_y[i]*b});
            queen_hits.insert({x2+dir_x[i]*b, y2+dir_y[i]*a});
        }

        int count=0;
        for(auto &st: king_hits) {
            if(queen_hits.find(st) != queen_hits.end())
                count++;
        }

        cout << count << endl;
    }
    return 0;
}