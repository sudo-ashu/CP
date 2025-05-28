#include<bits/stdc++.h>
using namespace std;

// long long power(int n, int raised){
//     long long result=1;
//     for(int i=0; i<raised; i++) {
//         result *= n;
//     }
//     return result;
// }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        string s;
        cin >> s;

        long long year = stoll(s);
        int a = -1, b = -1;

        long long sqrtVal = pow(year, 0.5);

        if(sqrtVal*sqrtVal == year) {
            a = sqrtVal/2;
            b = sqrtVal - a;
        } else {
            a = -1;
            b = -1;
        }
        

        
        if(a == -1 && b == -1) {
            cout << -1 << endl; // If no valid year found
        } else {
            cout << a << " " << b << endl; // Output the two integers
        }
        
    }

    return 0;
}