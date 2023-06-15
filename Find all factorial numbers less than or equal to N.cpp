long long factorial(long long N){
        if(N<=1) return 1;
        
        return N*factorial(N-1);
    }
    
    
    vector<long long> ans;
    long long i = 1;
    
    vector<long long> factorialNumbers(long long N)
    {
        long long fac = factorial(i);
        if(fac>N) return ans;
        
        ans.push_back(fac);
        i++;
        factorialNumbers(N);
        return ans;
    }
