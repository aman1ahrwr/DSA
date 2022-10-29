 vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void solve(vector<string> &ans, string &temp, int index, string digits){
        if(index==digits.size()){
            if(temp.size()>0){
                ans.push_back(temp);   
            }
            return;
        }
        
        int number = digits[index]-'0';
        string alphabets = keys[number];
        
        for(int i=0; i<alphabets.size(); i++){
            temp.push_back(alphabets[i]);
            solve(ans, temp, index+1, digits);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int ind=0;
        string temp="";
        solve(ans, temp, ind, digits);
        return ans;
    }
