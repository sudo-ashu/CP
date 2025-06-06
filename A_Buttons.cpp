#include<bits/stdc++.h>
using namespace std;
#define ll long long


//1 2 40, 40->even->katie(second)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>> t;
    
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        
        int k=c%2;
        if(k==0) {
            //Anie starts
            if(a<=b) {
                cout << "Second" << endl;
            } else {
                cout << "First" << endl;
            }
            continue;

        } else {
            //Katie starts
            if(a>=b) {
                cout << "First" << endl;
            } else {
                cout << "Second" << endl;
            }
            continue; 
        }
    }

    return 0;
}