#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>> t;
    
    while(t--) {

        vector<vector<char>> board(10, vector<char>(10));

        int sum = 0;
        for(int i=0; i<10; i++) {
            for(int j=0; j<10; j++) {
                cin >> board[i][j];
            }   
                
        }

        for(int i=0; i<10; i++) {
            for(int j=0; j<10; j++) {
                if(board[i][j] == 'X' and ((i==0 or i==9) or (j==0 or j==9)))
                    sum+=1;
                
                else if(board[i][j] == 'X' and ((i==1 or i==8) or (j==1 or j==8)))
                    sum+=2;
                
                else if(board[i][j] == 'X' and ((i==2 or i==7) or (j==2 or j==7)))
                    sum+=3;
                
                else if(board[i][j] == 'X' and ((i==3 or i==6) or (j==3 or j==6)))
                    sum+=4;
                
                else if(board[i][j] == 'X' and ((i==4 or i==5) or (j==4 or j==5)))
                    sum+=5;
            }   
                
        }

        cout << sum << endl;
    }

    return 0;
}