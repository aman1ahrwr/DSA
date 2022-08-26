int maxArea(vector<int>& height) {
        int left=0; 
        int right=height.size()-1;
        int maxArea=INT_MIN;
        
        
        while(left<right){
            if(height[left]<height[right]){
                int currArea = height[left]*(right-left);
                maxArea=max(maxArea, currArea);
                left++;
            }else{
                int currArea = height[right]*(right-left);
                maxArea=max(maxArea, currArea);
                right--;
            }
        }
        return maxArea;
    }
