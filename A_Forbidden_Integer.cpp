#include<bits/stdc++.h>
using namespace std;
#define ll long long

//11 3 2
//n=11 so now, n=n/k => n=11/3 = 3
//3 3 3 (11 - 3*(11/3))


//8 2 1
//2 2 2 2 (8 - 2*(8/2))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n,k,x;
        cin>>n>>k>>x;
        
        if(x!=1) {
            
            cout << "YES" << endl;
            cout << n << endl;
            for(auto i=0; i<n; i++) cout << 1 << " ";
            cout << endl;
        
        } else {

            int temp_1 = n/k;
            int temp_2 = n%k;

            if(k == 1) {
                cout << "NO" << endl;
                continue;
            }

            else if(k == 2) {

                if(n%k==0){
                    cout << "YES" << endl;
                    cout << n/k << endl;
                    for(int i=0; i<n/k; i++) cout << k << " ";
                    cout << endl;
                } else {
                    cout << "NO" << endl;
                }
            }

            else if(k>=3) {
                
                if(n%2 == 0) {
                    
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for(int i=0; i<n/2; i++) cout << 2 << " ";
                    cout << endl;
               
                } else {

                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    cout << 3 << " ";
                    for(int i=0; i<n/2 - 1; i++) cout << 2 << " ";
                    cout << endl;
                }
            }

        }
    }

    return 0;
}