int minFlips (string S)
{
    int count0=0;
    for(int i=0; i<S.size(); i++){
        if(i%2==0 && S[i]!='0'){
            count0++;
        }
        if(i%2==1 && S[i]!='1'){
            count0++;
        }
    }
    
    int count1=0;
    for(int i=0; i<S.size(); i++){
        if(i%2==0 && S[i]!='1'){
            count1++;
        }
        if(i%2==1 && S[i]!='0'){
            count1++;
        }
    }
    
    return min(count0, count1);
}
