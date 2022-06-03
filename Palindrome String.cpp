int helper(string &S, int start, int end){
	    if(start>=end){
	        return 1;
	    }
	    if(S[start]!=S[end]){
	        return 0;
	    }
	    return helper(S, start+1, end-1);
	    
	}
	int isPalindrome(string S)
	{
	    return helper(S, 0, S.size()-1);
	}
