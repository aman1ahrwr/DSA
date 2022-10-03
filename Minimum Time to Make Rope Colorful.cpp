int minCost(string colors, vector<int>& neededTime) {
        int start =0;
        int end=0;
        int sum=0;
        int n= neededTime.size();
        while(start<n && end<n){
            int maxTime=0;
            int totalGroupTime=0;
            while(end<n && colors[start]==colors[end]){
                maxTime= max(maxTime, neededTime[end]);
                totalGroupTime+=neededTime[end];
                end++;
            }
            sum+=totalGroupTime-maxTime;
            start=end;
        }
        return sum;
    }
