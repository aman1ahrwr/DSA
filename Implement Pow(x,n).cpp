double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        
        long long nn = n;
        double ans = 1.0;
        if(nn<0) nn = nn*(-1);
        
        while(nn){
            if(nn%2==1){
                ans = ans*x;
                nn = nn-1;
            }else{
                x = x*x;
                nn = nn/2;
            }
        }
        
        if(n<0){
            return ((double)(1.0)/(double)ans);
        }
        return ans;
    }
