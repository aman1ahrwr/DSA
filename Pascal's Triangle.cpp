vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);
        
        for(int i=0 ; i<n; i++){
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            
            for(int j=1; j<i; j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }


// ALternative Solution using nCr principle
class Solution {
public:
    vector<int> generateRows(int r){
        vector<int> ans;
        long long int res=1;
        ans.push_back(res);
        for(int i=1; i<r; i++){
            res=res*(r-i);
            res=res/i;
            ans.push_back(res);
        }
        return ans;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1; i<=n; i++){
            ans.push_back(generateRows(i));
        }

        return ans;
    }
};

// TC=O(R*C)
// SC=O(1)
