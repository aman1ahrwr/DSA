int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int> rows;
            vector<int> cols;
            rows.push_back(0);
            cols.push_back(0);
            rows.push_back(n+1);
            cols.push_back(m+1);
            for(int i=0; i<enemy.size(); i++){
                rows.push_back(enemy[i][0]);
                cols.push_back(enemy[i][1]);
            }
            
            sort(rows.begin(), rows.end());
            sort(cols.begin(), cols.end());
            
            int maxRow=INT_MIN;
            int maxCol=INT_MIN;
            for(int i=0; i<rows.size()-1; i++){
                maxRow=max(maxRow, rows[i+1]-rows[i]-1);
            }
            for(int i=0; i<cols.size()-1; i++){
                maxCol=max(maxCol, cols[i+1]-cols[i]-1);
            }
            
            return maxRow*maxCol;
        }
