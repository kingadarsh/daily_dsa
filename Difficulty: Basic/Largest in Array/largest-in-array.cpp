class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        for(auto a:arr){
            if(max<a)max=a;
        }
        return max;
        
    }
};
