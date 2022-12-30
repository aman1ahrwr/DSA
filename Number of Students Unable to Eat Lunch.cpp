int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[2] = {0, 0}; // Eating Priority of students, 0 or 1.
        for(int i=0; i<students.size(); i++){
            count[students[i]]++;
        }

        int k;
        for(k=0; k<sandwiches.size() && count[sandwiches[k]]>0; k++){
            count[sandwiches[k]]--;
        }
        return students.size()-k; // Number of people not eaten.
    }
