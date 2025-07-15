#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {

    int t; cin>>t;
    while (t--) {
        ll n,k; cin >> n >> k;
        vector<ll> nums_a(n), nums_b(n);

        for(ll i=0; i<n; i++) cin >> nums_a[i];

        ll count_neg = 0;

        for(ll i=0; i<n; i++) {
            cin >> nums_b[i];
            if(nums_b[i] == -1) count_neg++;
        }

        // input --

        //case 1: all elements of b are -1
        ll max_a = *max_element(begin(nums_a), end(nums_a));
        ll min_a = *min_element(begin(nums_a), end(nums_a));

        //cout << "Count_pos: " << n-count_neg << endl;

        if(count_neg == n) {
            cout << (k+1 + min_a) - max_a<< endl;
            continue;
        }

        //case 2: otherwise
        bool flag = false;
        ll sum_a=0;
        ll sum_first=0;

        for(ll i=0; i<n; i++) {
            if(nums_b[i] != -1) {
                sum_first = nums_a[i] + nums_b[i];
                break;
            }
        }


        for(ll i=0; i<n; i++) {

            if(nums_b[i] != -1) {

                sum_a = nums_b[i] + nums_a[i];  

                if(sum_a<max_a or sum_a>k+min_a or sum_a != sum_first) {

                    flag = true;
                    break;
                }
            }
        }

        if(flag) {
            cout << 0 << endl;
            continue;
        }

        //if evrything goes well answer will always be 1
        cout << 1 << endl;


    }
    return 0;
}