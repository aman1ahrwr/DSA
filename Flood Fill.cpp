void helper(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor) {
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]==newColor || image[sr][sc]!=oldColor){
            return;
        }
        
        image[sr][sc]=newColor;
        helper(image, sr+1, sc, oldColor, newColor);
        helper(image, sr, sc+1, oldColor, newColor);
        helper(image, sr-1, sc, oldColor, newColor);
        helper(image, sr, sc-1, oldColor, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        helper(image, sr, sc, oldColor, newColor);
        return image;
    }
