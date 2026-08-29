class Solution {
public:
    bool check(vector<int>& arr) {
        int cnt=0;
        int n=arr.size();
        for(auto i =1;i<=n;i++){
            if(arr[i%n]<arr[(i-1)%n])cnt++;
        }

        return cnt<2;

        
    }
};