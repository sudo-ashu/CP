#include<bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;


// n=4  1,2,3,4 & a=1, b=1 
// p = 1 2 4 3, q = 1 4 2 3 => YES
// for max pLen and complementory sLen
// p = 1 2 4 3, q = 1 4 2 3 => maxPLen=1 for maxSLen=1 

// n=5  1,2,3,4,5 & a=1, b=1 
// p = 1 2 4 3, q = 1 4 2 3 => YES
// for max pLen and complementory sLen
// p = 1 2 4 3 5, q = 1 2 3 4 5 => maxPLen=2 for maxSlen=1 & vice-versa

//n=6
// p = 1 2 3 4 5 6 & q = 1 3 2 5 4 6 pLen=1, sLen=1
// q = 1 2 3 4 5 6 & q = 1 2 3 5 4 6 maxPLen=3,maxSLen=3

//n=7
// p = 1 2 3 4 5 6 7 & q = 1 2 3 4 5 6 7 pLen=n, sLen=n
// q = 1 2 3 4 5 6 7 & q = 1 2 3 4 6 5 7 maxPLen=4,maxSLen=4

void solve(int n, int pLen, int sLen){
    
    if(n==1) {
        
        cout << "Yes";
        return;
    
    }

    bool flag = false;

    if(pLen+sLen <= n-2) {
            
        flag = true;
        
    } else if (pLen == n and sLen == n) {

        flag = true;

    }

    if(flag) {
        
        cout << "Yes";
        return;
    
    } else cout << "No";

}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        
        int n,a,b; cin>>n>>a>>b;
        solve(n, a, b);
        cout << endl;
    
    }

    return 0;
}