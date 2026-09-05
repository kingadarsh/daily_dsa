#include<algorithm>
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        auto it=find(arr.begin(),arr.end(),x);
        return it==arr.end()?-1:it-arr.begin();
    }
};