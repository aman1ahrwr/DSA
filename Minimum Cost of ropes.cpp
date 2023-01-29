long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>> minPQ;
        
        for(int i=0; i<n; i++){
            minPQ.push(arr[i]);
        }
        
        
        long long ans=0;
        while(minPQ.size()!=1){
            long long a=minPQ.top();
            minPQ.pop();
            long long b=minPQ.top();
            minPQ.pop();
            
            long long c= a+b;
            ans+=c;
            minPQ.push(c);
        }
        
        return ans;
    }
