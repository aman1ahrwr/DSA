int kthLargest(vector<int> &Arr,int N,int K){
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for(int i=0; i<N; i++){
            int sum=0;
            for(int j=i; j<N; j++){
                sum+=Arr[j];
                if(minHeap.size()<K){
                    minHeap.push(sum);
                }else if(minHeap.top()<sum){
                    minHeap.pop();
                    minHeap.push(sum);
                }else{
                    continue;
                }
            }
        }
        
        return minHeap.top();
    }
