priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(maxHeap.size()==0 || x<=maxHeap.top()){
            maxHeap.push(x);
        }else{
            minHeap.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        int diff = maxHeap.size()-minHeap.size();
        if(abs(diff)>1){
            if(maxHeap.size()>minHeap.size()){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }else{
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxHeap.size()==minHeap.size()){
            return (((double)minHeap.top()+(double)maxHeap.top())/2.0);
        }
        return maxHeap.size()>minHeap.size()? maxHeap.top(): minHeap.top();
    }
