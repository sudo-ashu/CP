#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
#define nl endl
#define pb push_back

bool isPrime(int num) {

    if(num == 1) return false;

    for(int i=2; i<=sqrt(num); i++) {
        if(num % i == 0) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        ll n; cin >> n;

        if(n <= 4) {
            cout << -1 << nl;
            continue;
        }

        int lastOdd, lastEven, num;
        
        if(n%2) {
        
            lastOdd = n;
            lastEven = n-1;
        
        } else {

            lastOdd = n-1;
            lastEven = n;
        }

        bool flag = false;

        for(int i=2; i<=lastEven; i+=2) {
           
            if(isPrime(lastOdd + i) == false) {
                num = i;
                flag = true;
                break;
            }
        }

        //cout << num << endl;

        if(flag == false) {
            cout << -1 << nl;
            continue;
        }

        for(int i=1; i<=lastOdd; i+=2) {
            cout << i << " ";
        }

        cout << num << " ";

        for(int i=2; i<=lastEven; i+=2) {
            if(i != num) cout << i << " ";
        }

        cout << nl;
    }

    return 0;
}