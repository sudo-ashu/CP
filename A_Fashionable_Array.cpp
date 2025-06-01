#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());

        int cnt=0;
        int i=0;
        while(i<n) {
            int minEl = arr[i];
            int maxEl = arr[n-1];

            if ((minEl+maxEl) % 2 == 0) {
                break;
            }
            else {
                if((maxEl - arr[n-2])%2 ==0)
                    i++;
                else if((maxEl - arr[n-2])%2 !=0)
                    n--;
                cnt++;
            }
        }


        cout << cnt << endl;
    }

    // 2 4 5 6 9 11  2+11=13
    // cnt = 1 4 5 6 9 11  4+11=15
    // cnt = 2 5 6 9 11  5+11=16
    return 0;
}