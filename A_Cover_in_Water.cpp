#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        
        string s;
        cin >> s;

        int i = 0;
        int idx;
        int waysToFill = 0;
        
        while(i<n) {

            if(s[i] == '.') {
                idx = i;

                while (s[idx] == '.') {
                    idx++;
                }
                
                int emptyCells = idx-i;
                i = idx;
                
                if (emptyCells >= 3) {
                    waysToFill = 2;
                    break;
                }
                    
                else if (emptyCells < 3)
                    waysToFill += emptyCells;
                
                continue;
            
            } else i++;
        }

        cout << waysToFill << endl;

    }

    return 0;
}