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
        int n; cin >> n;
        string s; cin >> s;

        if(n == 1) {
            cout << 2 << endl;
            continue;
        }


        int maxlenChar = 0;
        int count=0, idx=1;

        while(idx < n) {
            count=1;
            while(s[idx-1] == s[idx]) {
                count++;
                idx++;
            }
            idx++;
            maxlenChar = max(maxlenChar, count);
        }

        cout << maxlenChar+1 << endl;

    }

    return 0;
}