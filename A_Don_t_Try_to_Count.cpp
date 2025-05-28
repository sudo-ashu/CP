#include<bits/stdc++.h>
using namespace std;

bool check(string toBeChecked, string toBeCheckedIn){
    
    if(toBeChecked.size() > toBeCheckedIn.size())
        return false;
    
    int endPointOfChecking=toBeCheckedIn.size() - toBeChecked.size() + 1;
    
    for(int i=0; i<endPointOfChecking; i++) {
        
        if(toBeCheckedIn.substr(i, toBeChecked.size()) == toBeChecked)
            return true;
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>> t;
    
    while(t--) {
        int n, m; cin >> n >> m;
        string one, two;
        cin >> one >> two;

        string one0 = one;
        string one1 = one0+one0;
        string one2 = one1+one1;
        string one3 = one2+one2;
        string one4 = one3+one3;
        string one5 = one4+one4;
        
        long long ans=-1;
        if(check(two,one0))
            ans=0;
        else if(check(two,one1))
            ans=1;
        else if(check(two,one2))
            ans=2;
        else if(check(two,one3))
            ans=3;
        else if(check(two,one4))
            ans=4;
        else if(check(two,one5))
            ans=5;
        
        cout << ans << endl;
    }

    return 0;
}