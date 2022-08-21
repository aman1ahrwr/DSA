long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //using a map to store frequency of values obtained for prefix sum.
    	unordered_map<int, int> map;
    	int sum = 0;
    	long long int ans = 0;
    	map[sum]=1; //Initial sum will always be there so 1 frequency.
    	
    	for(int i=0; i<n; i++){
    	   // if encountered 0 then subtracting 1 from the sum
    	   // and vice versa when encountered 1
    	    if(arr[i]==0){
    	        sum-=1;
    	    }else{
    	        sum+=1;
    	    }
    	    
    	   // if current sum id already present then adding to ans and updating.
    	    if(map.find(sum)!=map.end()){
    	        ans+=map[sum];
    	        map[sum]++;
    	    }else{
    	        map[sum]=1;
    	    }
    	}
    	return ans;
    }
