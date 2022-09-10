 vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       
        vector<long long int> res;
        int left=0;
        int right=n-1;
        int curr=0;
        long long int temp=1;
        while(curr<n){
            while(left<curr){
                temp=temp*arr[left];
                left++;
            }
            while(right>curr){
                temp=temp*arr[right];
                right--;
            }
            res.push_back(temp);
            curr++;
            temp=1;
            left=0;
            right=n-1;
        }
        return res;
    }
