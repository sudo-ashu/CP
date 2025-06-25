#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// 1001 -> (0001, 1101, 1011, 1000)



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n; cin>> n;
        string s; cin >> s;
        
        int countOne = 0;
        int countZero = 0;
        for(auto &it: s) {
            if(it == '1')
                countOne++;
            if(it == '0')
                countZero++;
        }


        cout << countZero+(n-1)*countOne << endl;



    }

    return 0;
}