#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;

        ll shashilkType=0;

        if(x>y) {
            swap(x,y);
            swap(a,b);
        }

        ll ans=0;

        if(k-a >= 0) {
            ans =  (k - a)/x + 1;
            k = k-x*ans;
        }

        // if(shashilkType == a) shashilkType=b;
        // else shashilkType = a;

        if(k-b >=0) {
            ans +=  (k - b)/y + 1;
            //k = k-y*ans;
        }

        cout << ans << endl;
    }

    return 0;
}