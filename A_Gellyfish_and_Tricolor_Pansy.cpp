#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>> t;
    
    while(t--) {
        long long g,f,gk,fk;
        cin >>g>>f>>gk>>fk;

        long long gToBeReduced = min(g, gk);
        long long fToBeReduced = min(f, fk);

        if(gToBeReduced >= fToBeReduced)
            cout << "Gellyfish" << endl;

        else
            cout << "Flower" << endl; 
    }

    return 0;
}