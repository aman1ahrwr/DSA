// Approach Using HashArray
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int arr[a.size()+1]={0};

    for(int i=0; i<a.size(); i++){
        arr[a[i]]+=1;
    }

    int miss=-1, repeat=-1;
    for(int i=1; i<a.size()+1; i++){
        if(arr[i]==2) repeat=i; 
        if(arr[i]==0) miss=i; 
    }

    return {repeat, miss};
}
// TC=O(N)
// SC=O(N)


// Using Maths Equation
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n=a.size();
    long long sumN=(n*(n+1))/2;
    long long sum=0;
    long long sumNSq=(n*(n+1)*((2*n)+1))/6;
    long long sumSq=0;
    
    for(int i=0; i<n; i++){
        sum=sum+(long long)a[i];
        sumSq=sumSq+((long long)a[i]*(long long)a[i]);
    }

    long long xMy=sum-sumN;
    long long xPy=(sumSq-sumNSq)/xMy;
    
    long long repeat=(xMy+xPy)/2;
    long long miss=xPy-repeat;

    return {(int)repeat, (int)miss};
}
// TC=O(N)
// SC=O(1)


// Approach using Bits Manipulation and XOR (slightly harder to understand for the first time)
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n=a.size();
    int xr=0;

    for(int i=0; i<n; i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }

    int sigBit=0;
    
    while(1){
        if((xr & (1<<sigBit))!=0) break;
        sigBit++;
    }

    int oneClub=0;
    int zeroClub=0;
    for(int i=0; i<n; i++){
        if((a[i]&(1<<sigBit))!=0){
            oneClub=oneClub^a[i];
        }else{
            zeroClub=zeroClub^a[i];
        }

        if(((i+1)&(1<<sigBit))!=0){
            oneClub=oneClub^(i+1);
        }else{
            zeroClub=zeroClub^(i+1);
        }
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]==zeroClub) cnt++;
    }

    if(cnt==2) return {zeroClub, oneClub};
    return {oneClub, zeroClub};
    
}
// TC=O(N)
// SC=O(1)
