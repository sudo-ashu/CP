#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    long long t; cin>> t;
    
    while(t--) {
        long long n, k; cin >> n >> k;
        string s; cin >> s;

        unordered_map<char, long long> freq;
        for (char& c : s) {
            freq[c]++;
        }

        string ans="YES";

        char zero = '0';
        char one = '1';
        

        if((freq[zero]+ freq[one])/2 < k)
            ans="NO";
        else {
            
        }

        // while(st<end) {
        //     if (s[st] == s[end]) {
        //         if(count == k) {
        //             ans = "YES";
        //             break;
        //         } else if(count < k) {
        //             count++;
        //         } else{
        //             ans = "NO";
        //             break;
        //         }
        //     }
        //     st++;
        //     end--;
        // }

        // if (count == k and ans == "YES")
        //     ans = "YES";
        // else ans = "NO";
        cout << ans << endl;
    }

    return 0;
}