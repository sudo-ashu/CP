#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        int len = 2*n;

        vector<int> arr(len);

        for(int i=0; i<len; i++)
            cin >> arr[i];
    
        
        sort(rbegin(arr), rend(arr));

        int sum=0;

        vector<pair<int, int>> ans(n);
        int tempCount=0;


        for(int i=0; i<n; i++) {
            ans[i] = make_pair(arr[i] ,arr[i+n]);
        }

        for(int i=1; i<n; i++) {
            sum += abs(ans[i-1].first - ans[i].first) + abs(ans[i-1].second - ans[i].second);
        }
        
        cout << sum << endl;

        for(int i=0; i<n; i++)
            cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}