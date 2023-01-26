// Optimal and Easy to Understand Approach
string FirstNonRepeating(string A){
		    queue<int> q;
		    vector<int> v(26, 0);
		    
		    for(int i=0; i<A.size(); i++){
		        v[A[i]-'a']++;
		        q.push(A[i]);
		        
		        while(!q.empty()){
		            if(v[q.front()-'a']>1){
		                q.pop();
		            }else{
		                A[i]=q.front();
		                break;
		            }
		        }
		        if(q.empty()){
		            A[i]='#';
		        }
		    }
		    
		    return A;
		}


// Earlier Approach
string FirstNonRepeating(string A){
            vector<int> visited(26,0);
            string ans = "";
            vector<char> v;
            for(int i = 0; i<A.size(); i++){
                if(!visited[A[i]-'a']){
                    v.push_back(A[i]);
                }
                visited[A[i]-'a']++;
                int f = 0;
                for(int j=0; j<v.size(); j++){
                    if(visited[v[j]-'a']==1){
                        ans.push_back(v[j]);
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    ans.push_back('#');
                }
            }
            return ans;
		}
