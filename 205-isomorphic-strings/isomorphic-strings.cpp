class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();

        vector<int>srr(257,-1);
        vector<int>trr(257,-1);

        for(int i=0;i<n;i++){
            int ind=static_cast<int>(s[i]);
            int val=static_cast<int>(t[i]);

            if(srr[ind]==-1 or srr[ind]==val){
                srr[ind]= val;
            }
            else{
                return false;
            }
        }

        // 
        for(int i=0;i<n;i++){
            int ind=static_cast<int>(t[i]);
            int val=static_cast<int>(s[i]);

            if(trr[ind]==-1 or trr[ind]==val){
                trr[ind]= val;
            }
            else{
                return false;
            }
        }


        return true;

    }
};