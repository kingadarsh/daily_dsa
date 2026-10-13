class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())return false;
        
        vector<int>arr(27,0);

        for(int i=0;i<s.size();i++){
            int ind1=(s[i])-'a';
            int ind2=(t[i])-'a';
            arr[ind1]++;
            arr[ind2]--;

        }

        
        for(auto a:arr){
            if(a!=0){
                return false;
            }
        }
        return true;
    }
};