#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        if(n%2 == 0)
            cout << -1 << endl;
        else {
            cout << n << " ";
            for (int i=1; i<=n-1; i++)
                cout << i << " ";
            cout << endl; 
        } 

    }

    return 0;
}