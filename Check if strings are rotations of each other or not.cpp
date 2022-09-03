bool areRotations(string s1,string s2)
    {
        if(s1.size()!=s2.size()){
            return 0;
        }else{
            string temp=s1+s1;
            if(temp.find(s2)!=string::npos){
                return 1;
            }else{
                return 0;
            }
        }
    }
