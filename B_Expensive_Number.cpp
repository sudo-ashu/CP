#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(string &s){
    
    int n = s.size();

    int zero_trail=0;
    int countNum=0;

    int idx=n-1;

    for(idx; idx>=0; idx--) {

        if(s[idx] != '0') break;
        zero_trail++;
        
    }

    for(idx; idx>=0; idx--) {

        if(s[idx] != '0')
            countNum++;

    }

    cout << zero_trail + countNum-1;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {

        // as the number is pretty huge, so we would want to take it as a string
        string s; cin >> s;
        solve(s);
        cout << endl;
    }

    return 0;
}