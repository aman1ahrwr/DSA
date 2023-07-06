//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& arr) {
        vector<vector<int>> clone=arr;
        
        int n=arr.size();
        int m=arr[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(clone[i][j]==0){
                    int sum=0;
                    if(i>0){
                        sum+=clone[i-1][j];
                        arr[i-1][j]=0;
                    }
                    
                    if(i<n-1){
                        sum+=clone[i+1][j];
                        arr[i+1][j]=0;
                    }
                    
                    if(j>0){
                        sum+=clone[i][j-1];
                        arr[i][j-1]=0;
                    }
                    
                    if(j<m-1){
                        sum+=clone[i][j+1];
                        arr[i][j+1]=0;
                    }
                    
                    arr[i][j]=sum;
                }
            }
        }
    }
// TC=O(N*M)
// SC=O(N*M)

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
