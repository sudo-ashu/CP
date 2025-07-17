#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define nl endl
#define pb push_back
using namespace std;

int main() {

    int t; cin>>t;
    while (t--) {

        string the_word, final_word;
        cin >> the_word >> final_word;
        
        if(the_word == final_word) {
            cout << "YES" << nl;
            continue;
        }

        int the_n = the_word.length();
        int final_n = final_word.length();

        bool flag = true;

        unordered_map<char, vector<int>> idx_vec;
        unordered_map<char, int> freq_final;

        for(int i=0; i<final_n; i++) freq_final[final_word[i]]++;
        for(int i=0; i<the_n; i++) idx_vec[the_word[i]].pb(i);

        vector<int> temp_idx;

        for(int i=0; i<final_n; i++) {
            
            if(idx_vec.find(final_word[i]) == idx_vec.end()) {
            
                flag = false;
                break;
            
            } else {

                int idx=idx_vec[final_word[i]].size() - freq_final[final_word[i]];

                if(idx < 0 or idx >= idx_vec[final_word[i]].size()) {
                    flag = false;
                    break;
                }

                else temp_idx.pb(idx_vec[final_word[i]][idx]);
                
                freq_final[final_word[i]]--;
            }
        }

        if(flag == false) {
            cout << "NO" << nl;
            continue;
        }

        // for(auto it: temp_idx) cout << it << " ";
        
        int temp_n = temp_idx.size();

        for(int i=1; i<temp_n; i++) {
            if(temp_idx[i-1] > temp_idx[i]) {
                flag = false;
                break;
            }
        }

        if(flag == false) {
            cout << "NO" << nl;
            continue;
        }
        
        if(temp_idx[temp_n-1] < temp_idx[temp_n-2]) cout << "NO" << nl;
        else cout << "YES" << nl;
        
    }
    return 0;
}