int search(int A[], int N){
	    int XOR=0;
	    for(int i=0; i<N; i++){
	        XOR=XOR^A[i];
	    }
	    return XOR;
	}
