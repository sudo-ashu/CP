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
        int n; cin>>n;
        vector<vector<int>> grid(n, vector<int>(n));

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin >> grid[i][j];
            }
        }

        // input --

        int m = 2*n;
        ll sum_m = (m*(m+1))/2;

        vector<int> ans(m-1, 0);
        
        ll sum_ans=0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) ans[i+j] = grid[i][j];
        }


        for(auto &num: ans) sum_ans += num;

        cout << sum_m-sum_ans << " ";

        for(auto &num: ans) cout << num << " ";

        cout << endl;



    }

    return 0;
}