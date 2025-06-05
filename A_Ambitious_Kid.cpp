#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>> t;
    vector<int> vec(t);
    for(int i=0; i<t; i++) {
        int a;
        cin >> a;
        if(a<0) vec[i] = -1*a;
        else vec[i] = a;
    }

    sort(begin(vec), end(vec));
    cout << vec[0];

    return 0;
}