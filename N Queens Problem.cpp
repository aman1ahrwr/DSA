// Approach without space, Easy to understand.
#include <bits/stdc++.h> 

void copy(vector<vector<int>> &ans, vector<vector<int>> &board, int n){
	vector<int> temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n){
	int x=row;
	int y=col;

	while(y>=0){
		if(board[x][y]==1){
			return false;
		}
		y--;
	}

 	x=row;
	y=col;
	while(y>=0&& x>=0){
		if(board[x][y]==1){
			return false;
		}
		x--; y--;
	}

	x=row;
	y=col;
	while(y>=0 && x<n){
		if(board[x][y]==1){
			return false;
		}
		x++; y--;
	}
	return true;
}

void solve(vector<vector<int>> &ans, vector<vector<int>> &board, int col, int n){
	if(col==n){
		copy(ans, board, n);
		return;
	}

	for(int row=0; row<n; row++){
		if(isSafe(row, col, board, n)){
			board[row][col]=1;
			solve(ans, board, col+1, n);
			board[row][col]=0;
		}
	}
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> ans;
	vector<vector<int>> board(n, vector<int> (n, 0));
	int col=0;
	solve(ans, board, col, n);
	return ans;
}


// Approach Using Space
void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }   
        
        for(int row=0; row<n; row++){
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+col-row]=1;
                solve(col+1, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
                board[row][col]='.';
                leftRow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+col-row]=0;
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n;i++){
            board[i]=s;
        }
        
        vector<int> leftRow(n, 0), upperDiagonal(2*n-1, 0), lowerDiagonal(2*n-1, 0);
        solve(0, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
        return ans;
    }
