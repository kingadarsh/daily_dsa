class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            arr[i]=pow(arr[i],2);
        }

        sort(arr.begin(),arr.end());
        return arr;
    }
};