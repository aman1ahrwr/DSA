vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue <int, vector<int>, greater<int> > pq;
	    for(int i=0; i<n; i++){
	        if(pq.size()==k){
	            if(pq.top()<arr[i]){
	                pq.pop();
	                pq.push(arr[i]);  
	            }
	        }else{
	            pq.push(arr[i]);
	        }
	    }
	    
	    vector<int> res;
	    while(!pq.empty()){
	        int temp = pq.top();
	        pq.pop();
	        res.push_back(temp);
	    }
	    reverse(res.begin(), res.end());
	    
	    return res;
	}
