string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        
        if(map.size()<2) return "";
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> minPQ;
        for(auto i: map){
            if(minPQ.size()<2){
                minPQ.push({i.second, i.first});
            }else if(minPQ.top().first<i.second){
                minPQ.pop();
                minPQ.push({i.second, i.first});
            }else{
                continue;
            }
        }
        
        return minPQ.top().second;
    }

// OR TRY THIS SOLUTION BELOW.

string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> map;
        int maxi=0;
        string temp="";
        for(int i=0; i<n; i++){
            map[arr[i]]++;
            if(map[arr[i]]>maxi){
                maxi=map[arr[i]];
                temp = arr[i];
            }
        }
        
        map[temp]=0;
        maxi=0;
        temp="";
        for(auto i: map){
            if(i.second>maxi){
                maxi=i.second;
                temp = i.first;
            }
        }
        
        return temp;
       
    }
