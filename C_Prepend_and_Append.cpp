#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(string &s, int n){
    
    int countAns=0;

    int st=0, end=n-1;
    while(st <= end) {
        
        if(s[st] == s[end])
            break;
        else if(s[st] != s[end])
            countAns++;
        
        st++; end--;
    }

    cout << n-2*countAns;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        string s; cin>>s;

        // input
        solve(s, n);
        cout << endl;
    }

    return 0;
}