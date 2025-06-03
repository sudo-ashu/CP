#include<bits/stdc++.h>
using namespace std;

vector<int> fibbo(long long n){
    vector<int> res; 
    int f1=1, f2=2;
    res.push_back(1);
    res.push_back(2);

    if(n==2) return res;

    for(int i=2; i<n; i++) {
        int temp = f2;
        f2 = f1+f2;
        f1 = temp;
        res.push_back(f2);
    }
    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {
        long long n, m;
        cin >> n >> m;
        vector<int> tempFib = fibbo(n); 
        reverse(begin(tempFib), end(tempFib));

        string s="";
        bool check = false;

        for(int i=0; i<m; i++) {
            check = false;

            vector<int> box(3);

            for (int i=0; i<3; i++)
                cin >> box[i];

            sort(rbegin(box), rend(box));

            if(box[0] >= tempFib[0]+tempFib[1] and box[2] >= tempFib[0]) {
                s=s+"1";
                check = true;
            }

            if(check == false)
                s=s+"0";
        }
        cout << s << endl;
    }

    return 0;
}