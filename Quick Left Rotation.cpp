void reverse(int arr[], int start, int end){
	    while(start<=end){
	        swap(arr[start++], arr[end--]);
	    }
	}
	
	void leftRotate(int arr[], int k, int n) 
	{ 
	   k=k%n;
	   
	   reverse(arr, 0, k-1);
	   reverse(arr, k, n-1);
	   reverse(arr, 0, n-1);
	} 
		 
    // TC=O(n)
    // SC=O(1)
