void recur(int ind, string S, vector<string> &ans){
	        if(ind==S.size()){
	            ans.push_back(S);
	            return;
	        }
	        for(int i=ind; i<S.size(); i++){
	            if(i>ind && S[i]==S[i-1])continue;
	            swap(S[ind], S[i]);
	            recur(ind+1, S, ans);
	            swap(S[ind], S[i]);
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    sort(ans.begin(), ans.end());
		    recur(0, S, ans);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
