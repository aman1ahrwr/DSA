bool fact(int mid, int n){
            int f = 5;
            int count=0;
            while(f<=mid){
                count+=(mid/f);
                f*=5;
            }
            
            return count>=n;
        }
    
        int findNum(int n)
        {
            if(n==1) return 5;
            
            int low=0;
            int high=5*n;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(fact(mid, n)){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            
            return low;
        }
