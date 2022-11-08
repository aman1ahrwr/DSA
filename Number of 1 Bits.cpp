int setBits(int N) {
        int count = 0;
        while(N){
            if(1&N){
                count++;
            }
            N=N>>1;
        }
        
        return count;
    }
