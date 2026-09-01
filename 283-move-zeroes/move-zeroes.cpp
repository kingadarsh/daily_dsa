class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp(n,0);
        int j=0;

        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                temp[j++]=arr[i];
            }
        }

        arr=temp;

    }
};