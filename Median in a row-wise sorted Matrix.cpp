// Better, Easy to Understand Solution.
int countSmaller(vector<int>& temp, int t){
        int low=0;
        int high=temp.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            
            if(temp[mid]<=t){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        return low;
    }

    int median(vector<vector<int>> &matrix, int R, int C){
        int low=0;
        int high=1e9;
    
        while(low<=high){
            int mid=(high+low)>>1;
            
            int cnt=0;
            for(int i=0; i<R; i++){
                cnt+=countSmaller(matrix[i], mid);
            }
            
            if(cnt<=((R*C)>>1)){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        return low;
    }


// Earlier Solution
int solve(vector<int>A,int index)
    {   
        int count=0;
        
        count+=(upper_bound(A.begin(),A.end(),index)-A.begin());
    
        return count;
        
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        int high=2000;
        int low=1;
        int median=(r*c)/2;
        while(low<=high)
        {
            int cnt=0;
            int mid=(high+low)/2;
            for(int i=0;i<r;i++)
            {
                cnt+=solve(matrix[i],mid);
            }
            if(cnt<=median)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
    }
