#include<set>

int longestSuccessiveElements(vector<int>&a) {
    unordered_set<int> set;

    for(auto i: a){
        set.insert(i);
    }

    int currCnt=0;
    int maxCnt=INT_MIN;
    for(int i=0; i<a.size(); i++){
        if(set.find(a[i]-1)!=set.end()){
            continue;
        }else{
            currCnt=0;
            int ele=a[i];
            while(set.find(ele)!=set.end()){
                currCnt++;
                ele=ele+1;
            }
        }

        maxCnt=max(maxCnt, currCnt);
    }

    return maxCnt;
}

// TC=O(N)
// SC=O(N)
