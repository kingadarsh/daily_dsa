class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp="";
        for(auto a:s){
            if(isalnum(a)){
                temp+=tolower(a);
            }
        }

        s=temp;
        reverse(temp.begin(),temp.end());
        return temp==s;
    }
};