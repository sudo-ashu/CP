#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n,x; cin>>n>>x;
        vector<int> nums(n);
        int startPos=0, endPos=0;
        for(int i=0; i<n; i++){
            cin >> nums[i];
            if(nums[i] == 1)
                endPos=i;
        }
        //input done

        //endPos of 1 and startPos of 1
        for(int i=0; i<n; i++){
            if(nums[i] == 1) {
                startPos=i;
                break;
            }
        }

        if(endPos-startPos + 1 <= x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}