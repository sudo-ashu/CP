#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// 2649 -> (4 digits) 2649/1000 = 2+(9) + (2649-1000)=(649)
// 272 ->

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin>>n;

        if(n<10) {
            cout << n << endl;
            continue;
        }

        //divFrom
        ll divFrom = 10;
        ll ans = 0;
        int lastQu = 0;


        while(n/divFrom > 0) {
            if(n/divFrom > 0){
                ans += 9;
                lastQu = n/divFrom;
            }
            divFrom = divFrom*10;
        }

        cout << ans+lastQu << endl;

    }

    return 0;
}