#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        
        if((a+b+c)%3 != 0) {
            cout << "NO" << endl;
            continue;
        }

        else {
            if(c-b >= b-a)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}