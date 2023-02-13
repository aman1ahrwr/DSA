// Easy to Undeerstand Solution but Same Approach
bool static compare(struct Item a, struct Item b){
        double i=((double)a.value/(double)a.weight);
        double j=((double)b.value/(double)b.weight);
        
        return i>j;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        sort(arr, arr+n, compare);
        
        double ans=0.0;
        for(int i=0; i<n; i++){
            if(arr[i].weight<=W){
                ans+=arr[i].value;
                W-=arr[i].weight;
            }else{
                ans+=(double)W*(arr[i].value/(double)arr[i].weight);
                break;
            }
        }
        
        return ans;
    }

// Earlier Solution
bool static comparison(struct Item a, struct Item b){
        double a1 = (double)a.value/(double)a.weight;
        double b1 = (double)b.value/(double)b.weight;
        return a1>b1;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, comparison);
        
        int currWeight = 0;
        double value = 0.0;
        
        for(int i=0; i<n; i++){
            if(currWeight+arr[i].weight <= W){
                currWeight+=arr[i].weight;
                value+=arr[i].value;
            }else{
                int remainWeight = W-currWeight;
                value+=(arr[i].value/(double)arr[i].weight)*(double)remainWeight;
                break;
            }
        }
        return value;
    }
