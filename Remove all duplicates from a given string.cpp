string removeDuplicates(string str) {
	    unordered_map<char, int> map;
	    string ans="";
	    for(int i=0; i<str.size(); i++){
	        if(map.find(str[i])==map.end()){
	            map[str[i]]++;
	            ans+=str[i];
	        }
	    }
	    return ans;
	}
