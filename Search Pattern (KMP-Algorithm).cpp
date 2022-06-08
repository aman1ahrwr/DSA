vector <int> search(string pat, string txt)
        {
            if(pat.size()>txt.size()) return {-1};
            vector<int>ans;
            
            vector<int>lps(pat.size()+1);
            
            lps[0]=-1;
            
            int i=0,j=-1;
            while(i<pat.size())
            {
                
                while(j>=0 && pat[i]!=pat[j])   j = lps[j];
                
                i++;
                j++;
                lps[i]=j;
            }
            
            i=0,j=0;
            
            while(i<txt.size())
            {
                while(j>=0 && pat[j]!=txt[i])   j = lps[j];
                
                i++;
                j++;
                if(j==pat.size())
                {
                    ans.push_back(i-j+1);
                    j=lps[j];
                }
            }
            return ans;
            
        }
