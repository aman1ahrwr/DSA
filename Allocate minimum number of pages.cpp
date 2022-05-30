bool isPossible(int mid, int student, int A[], int N){
        int allotedStudent = 1, pages=0;
        for(int i=0; i<N; i++){
            if(A[i]>mid) return false;
            if(A[i]+pages>mid){
                allotedStudent++;
                pages=A[i];
            }else{
                pages+=A[i];
            }    
        }
        
        if(allotedStudent>student){
            return false;
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int student) 
    {
        int low = A[0];
        int high=0;
        for(int i=0; i<N; i++){
            high+=A[i];
        }
        
        while(low<=high){
            int mid = (low+high)>>1;
            
            if(isPossible(mid, student, A, N)){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
