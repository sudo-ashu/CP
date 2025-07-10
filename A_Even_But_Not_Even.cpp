#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(string s, int n){
    
    int i=n-1;
    
    for(i; i>=0; i--) {
        if((s[i]-'0') % 2 != 0) break;
    }

    int new_n = i+1;

    if(new_n == 0 or n == 1) {
        cout << "-1";
        return;
    }

    //ll sum = s[new_n-1]-'0';

    string ans = "";

    int count_odd=0;
    for(int j=new_n-1; j>=0; j--) {
        
        if( (s[j]-'0') % 2 != 0) count_odd++;
        ans += s[j];
    }

    reverse(begin(ans), end(ans));

    //cout << ans << endl;

    if (count_odd == 1) {

        cout << "-1";
        return;

    } else if(count_odd > 1 and count_odd % 2 == 1) {

        int j=0;

        for (j; j<new_n; j++) {
            if((ans[j]-'0') % 2 == 1) break;
        }

        ans.erase(j,1);

    } 
    
    int j=0;

    for (j; j<new_n; j++) {
        if(ans[j] != '0') break;
    }
    
    ans.erase(0, j);
    
    
    if(ans.length() == 0) cout << "-1";

    else cout << ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        string s; cin >> s;
        solve(s, n);
        cout << endl;
    }

    return 0;
}