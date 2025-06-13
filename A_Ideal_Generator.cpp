#include<bits/stdc++.h>
using namespace std;
#define ll long long

// [1,2,1] k=3; [2,4,2] k=3; [7,1,7] k=3
// sum=4; sum=8; sum=15
// [4,2,2,4] K=4; [1,1,1,1] k=4; [] k=4
// sum=12; sum=4
// k=2 [1,1], [2,2], [3,3], [4,4]
// sum1=2, 4, 6, 8
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int k; cin >> k;

        if(k%2 != 0)
            cout << "YES" << endl;
        else cout << "NO" << endl; 

    }

    return 0;
}