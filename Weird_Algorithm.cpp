#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    long long t; cin>> t;
    
    while(t!=1) {
        cout << t << " ";
        if(t%2 == 0) {
            t=t/2;
        }
        else {
            t=t*3 + 1;
        }
    }

    cout << t << endl; // Print the last value which is 1
    return 0;
}