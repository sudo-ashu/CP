#include<bits/stdc++.h>
using namespace std;
#define ll long long

// 10 -> 21 (total num = 21-10+1 = 12)
// 12/2 6-odd & 6-even

// 3 -> 7 (total num = 7-3+1 = 5)
// 5/2 2-even & (5-2)-odd

// 2 -> 12 (total num = 12-2+1 = 11)
// 11/2 5-even & (11-5)-odd

// 3 -> 10 (total num = 10-3+1 = 8) => odd-to-even || even-to-odd
// same even and odd number of numbers



// (10,12,14,16,18,20,22,24,26), (11,13,15,17,19,21,23,25)
// (4,6), (3,5,7)


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;

    while(t--) {
        int l,r; cin>>l>>r;
        //check odd
        int totalNum = (r-l+1);
        int noOfOdds = 0;
        //both are even or 
        if(l%2==0 and r%2==0) noOfOdds = totalNum/2;

        //both are odd
        if(l%2!=0 and r%2!=0) noOfOdds = totalNum/2+1;

        else noOfOdds = totalNum/2;

        cout << noOfOdds/2 << endl;
    }

    return 0;
}