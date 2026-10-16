bool recu(string &s,int i, int j, bool ans){
    if(i>=j){
        return ans;
    }

    if(!isalnum(s[i])){
       return recu(s,i+1,j,ans);
    }
    else if(!isalnum(s[j])){
       return recu(s,i,j-1,ans);
    }
    else if(isalnum(s[i]) and isalnum(s[j]) ){
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        else{
           return recu(s,i+1,j-1,ans);
        }
        
    }

    return ans;
    

}

class Solution {
public:
    bool isPalindrome(string s) {
        bool ans=true;
        return recu(s,0,s.size()-1,ans);
    }
};