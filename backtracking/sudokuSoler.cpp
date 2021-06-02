#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vp vector<pii>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mii map<int,int>
#define w(x) int x; cin>>x; while(x--)

bool solve(vector<vector<char>> &board){

    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){

            if(board[i][j]=='.'){
                for(int c=1;c<=9;c++){
                    if(isValid(i,j,board,c)){
                        board[i][j]=c;
                        if(solve(board)){
                            return true;
                        }
                        else{
                            board[i][j]='.';
                        }
                    }
                }

                return false;
            }
        }
    }

    return true;
}

bool isValid(int row,int col,vector<vector<char>> &board,char c){
    for(int i=0;i<9;i++){
        if(board[row][i]=='c')
        return false;
        if(board[i][col]=='c')
        return false;
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]=='c')
        return false;
    }

    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //Write your code here

    return 0;
}