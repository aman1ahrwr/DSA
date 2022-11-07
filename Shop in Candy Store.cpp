vector<int> candyStore(int candies[], int n, int k)
    {
        sort(candies, candies+n);
        int i=0;
        int j=n-1;
        int mini=0;
        int maxi=0;
        
        while(i<=j){
            mini+=candies[i++];
            j-=k;
        }
        
        i=n-1;
        j=0;
        while(i>=j){
            maxi+=candies[i--];
            j+=k;
        }
        
        return {mini, maxi};
    }
