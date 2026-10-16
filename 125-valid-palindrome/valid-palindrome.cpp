bool recu(const string &s,int i, int j){
    if(i>=j){
        return true;
    }

    if(!isalnum(s[i])){
       return recu(s,i+1,j);
    }
    else if(!isalnum(s[j])){
       return recu(s,i,j-1);
    }
    
    if(tolower(s[i])!=tolower(s[j])){
        return false;
    }

    return recu(s, i + 1, j - 1);
    

}

class Solution {
public:
    bool isPalindrome(string s) {
        // bool ans=true;
        return recu(s,0,s.size()-1);
    }
};