class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);

        int l=0,r=n-1;

        int k=n-1;

        while(l<=r){
            if(abs(arr[l])<=abs(arr[r])){
                ans[k--]=pow(arr[r],2);
                r--;
            }
            else if(abs(arr[l])>abs(arr[r])){
                ans[k--]=pow(arr[l],2);
                l++;
            }
        }

        for(auto a:ans){
            cout<<a<<" ";
        }

        return ans;
    }
};