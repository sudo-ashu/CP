#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<int> &nums, int n){
    int maxSpace = 0;

    //two pointer approach
    int idx=0;
    while(idx < n) {
        
        int countZero = 0;
        int tempIdx = idx;
        
        while (nums[tempIdx]==0 and tempIdx<n ) {
            tempIdx++;
            countZero++;
        }

        maxSpace = max(maxSpace, countZero);
        
        if(tempIdx==idx) idx++;
        else idx = tempIdx;
    }
    cout << maxSpace;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> binArr(n);
        for(int i=0; i<n; i++) cin >> binArr[i];

        //input
        solve(binArr, n);
        cout<<endl;
    }

    return 0;
}