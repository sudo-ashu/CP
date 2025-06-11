#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


        //5 6 3                  
  //0  //0 3 4 0 3 4
  //1  //2 5 6 2 5 6
  //2  //1 1 1 1 1 1
  //3  //0 3 4 0 3 4
  //4  //2 5 6 2 5 6

        //3 3 3
  //0   //1 2 3
  //1   //4 5 6
  //2   //7 8 9

        //4 6 3                  
  //0  //0 1 2 0 1 2
  //1  //1 1 1 1 1 1
  //2  //1 1 1 1 1 1
  //3  //0 1 2 0 1 2

        //3 6 3                  
  //0  //0 1 2 0 1 2
  //1  //3 4 5 3 4 5
  //2  //6 7 8 6 7 8

        //2 6 3                  
  //0  //0 1 2 0 1 2
  //1  //3 4 5 3 4 5


        //9 3 3                  
  //0  //1 4 7 
  //1  //2 5 8 
  //2  //3 6 9
  //3  //1 4 7
  //4  //2 5 8
  //5  //3 6 9
  //6  //1 4 7
  //7  //2 5 8
  //8  //3 6 9

    int t; cin>> t;
    
    while(t--) {
        
        int n,m,k; cin>>n>>m>>k;
        //case : (n<k+1 and m<k+1)
        
        //this is the specific-general case...
        if(n<k+1 and m<k+1) {
            cout << n*m << endl;
            continue;
        }

        else {
            cout << min(m,k) * min(n,k) << endl;
            continue;
        }
    }

    return 0;
}