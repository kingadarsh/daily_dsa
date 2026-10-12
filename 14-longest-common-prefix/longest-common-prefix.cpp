class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        
        sort(s.begin(),s.end());
        
        string s1 =s[0];
        string s2=s[s.size()-1];

        int i =0;
        int j=0;

        string ans="";

        while(i<s1.size() and j<s2.size()){
            if(s1[i]==s2[j]){
                ans+=s1[i];
                i++;j++;
            }
            else{
                break;
            }
        }

        return ans;
    }
};