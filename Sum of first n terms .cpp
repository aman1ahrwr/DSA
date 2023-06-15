long long sumOfSeries(long long N) {
        if(N==1) return 1;
        
        return (long long)(N*N*N) + sumOfSeries(N-1);
    }
