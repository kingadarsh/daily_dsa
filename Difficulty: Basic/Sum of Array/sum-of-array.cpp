
int recu(vector<int>&arr, int& sum, int i){
    if(i>=arr.size()){
        return sum;
    }
    sum+=arr[i];
    return recu (arr,sum,++i);
}

class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        
        int sum =0;
        return recu(arr,sum,0);
    }
};