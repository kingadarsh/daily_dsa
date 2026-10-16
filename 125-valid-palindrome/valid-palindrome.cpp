
string recu(string &s,string &str,int i){
    if(i>=s.size()){
        return str;
    }

    if(isalnum(s[i])){
        str+=tolower(s[i]);
    }

    return recu(s,str,i+1);
}


class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        recu(s,str,0);   
        string temp=str;
        reverse(str.begin(),str.end());

        return str==temp;   
    }
};