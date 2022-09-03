string reverseWord(string str){
    int s=0; 
    int e=str.size()-1;
    while(s<e){
        char temp =str[s];
        str[s] =str[e];
        str[e]=temp;
        
        s++;
        e--;
    }
    
    return str;
}
