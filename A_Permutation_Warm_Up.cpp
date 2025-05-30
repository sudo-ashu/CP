#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        //input closed

        if(n == 2) {
            cout << 2 << endl;
            continue;
        }

        long long maxFp = 0;
        int val = n;
        //I got the logic
        int num = 1;
        while (val >= num) {
            maxFp += 2*abs(val-num);
            val--;
            num++;
        }
        //cout << "maxFp: " << maxFp << endl;
        
        maxFp = maxFp/2;
        
        cout << maxFp+1 << endl;
    }

    return 0;
}