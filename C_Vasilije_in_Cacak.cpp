#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// sum of k distinct elements must be equal to x
// 1 <= k <=n

// 1 2 3 4 5 6 & x = 20 & k = 5 => (2,3,4,5,6)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n,k,x; cin>>n>>k>>x;

        ll sum_n = ((1 + n) * n)/2;

        //cout << "sum_n: " << sum_n << endl;

        if(x > sum_n) {
            cout << "NO" << endl;
            continue;
        }

        ll min_sum_k = (k * (1+k))/2;

        // ll firstEl = n-k+1;
        
        ll max_sum_k = (k * (n-k+1 + n))/2;


        //cout << "sum_min_k: " << min_sum_k << endl;
        //cout << "sum_max_k: " << max_sum_k << endl;

        if(x >= min_sum_k and x <= max_sum_k) {
            cout << "YES" << endl;
            continue;
        }

        else cout << "NO" << endl;
    }

    return 0;
}