class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        // int n=arr.size();
        int len=0,maxLen=0;
        for(auto a:arr){
            if(a==1){
                len+=1;
                maxLen=max(maxLen,len);
            }
            else{
                len=0;
            }
        }

        return maxLen;
    }
};