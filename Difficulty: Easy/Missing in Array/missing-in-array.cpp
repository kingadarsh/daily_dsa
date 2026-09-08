#include<algorithm>
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here

        
        int act_sum=accumulate(arr.begin(),arr.end(),0);
        
        return ((arr.size()+1)*(arr.size()+1+1))/2-act_sum;
        
    }
};