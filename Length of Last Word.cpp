int lengthOfLastWord(string s) {
        int i=s.size()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }

        int wordCnt=0;
        while(i>=0 && s[i]!=' '){
            i--;
            wordCnt++;
        }

        return wordCnt;
    }
