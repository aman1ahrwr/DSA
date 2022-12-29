int halveArray(vector<int>& nums) {
        double initialSum=0;
        priority_queue<double, vector<double>> maxHeap;
        for(int i=0; i<nums.size(); i++){
            initialSum+=nums[i];
            maxHeap.push(nums[i]);
        }

        double sum=initialSum;
        int ans=0;
        while((initialSum-sum)<(initialSum/2)){
            ans++;
            double t= maxHeap.top();
            maxHeap.pop();
            sum-=t;
            double d = (t/2);
            sum+=d;
            maxHeap.push(d);
        }

        return ans;
    }
