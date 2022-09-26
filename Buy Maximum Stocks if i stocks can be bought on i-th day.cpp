int buyMaximumProducts(int n, int k, int price[]){
        vector<pair<int, int>> priceDay;
        for(int i=0; i<n; i++){
            priceDay.push_back(make_pair(price[i], i));
        }
        
        sort(priceDay.begin(), priceDay.end());
        
        
        int count=0;
        for(auto i: priceDay){
            //! based indexing
            int dayCount=0;
            while(k>=i.first && dayCount<=i.second){
                dayCount++;
                k-=i.first;
                count++;
            }
        }
        
        return count;
    }
