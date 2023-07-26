vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int, int> eleFreq;
    for(int i=0; i<v.size(); i++){
        eleFreq[v[i]]++;
    }

    int maxFreq=INT_MIN;
    int maxEle=-1;
    int minEle=-1;
    int minFreq=INT_MAX;
    for(auto i: eleFreq){
        int freq=i.second;
        int ele=i.first;

        if(freq>maxFreq){
            maxEle=ele;
            maxFreq=freq;
        }else if(freq==maxFreq){
            maxEle=min(maxEle, ele);
        }

        if(freq<minFreq){
            minEle=ele;
            minFreq=freq;
        }else if(freq==minFreq){
            minEle=min(minEle, ele);
        }

    }

    return {maxEle, minEle};
}

// TC=O(N)
// SC=O(N)
