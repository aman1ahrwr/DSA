class Solution {
public:
    long long findHours(vector<int> &piles, int m){
        long long ans=0;
        for(int i=0; i<piles.size(); i++){
            ans+=ceil((double)piles[i]/(double)m);
        }

        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
        int ans=-1;
        for(auto i: piles){
            if(i>maxi){
                maxi=i;
            }
        }

        int low=1;
        int high=maxi;

        while(low<=high){
            int mid=low+(high-low)/2;
            long long hrsVal=findHours(piles, mid);

            if(hrsVal<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }

        return ans;
    }
};
// TC=O(N*log(max(element)))
// SC=O(1)
