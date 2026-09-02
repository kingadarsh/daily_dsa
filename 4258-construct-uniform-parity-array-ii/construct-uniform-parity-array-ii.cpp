class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minEven=INT_MAX;
        int minOdd=INT_MAX;


        for(auto a:nums1){
            if(a%2==0 and a<minEven){
                minEven=a;
            }
            if(a%2!=0 and a<minOdd){
                minOdd=a;
            }
        }

        if(minEven==INT_MAX)return true;
        if(minOdd==INT_MAX)return true;

        return minOdd<minEven;
    }
};