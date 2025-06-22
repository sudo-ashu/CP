#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> nums(n);

        ll sum=0;
        ll countNeg=0;
        ll prod=1;
        for(int i=0; i<n; i++) {
            cin >> nums[i];
            if(nums[i] == -1) countNeg++;
        }
        //input
        
        ll countPos = n-countNeg;
        
        int ansCount=0;
        while(countPos < countNeg or countNeg%2 != 0) {
            countPos++;
            countNeg--;
            ansCount++;
        }
        cout << ansCount << endl;
    }

    return 0;
}