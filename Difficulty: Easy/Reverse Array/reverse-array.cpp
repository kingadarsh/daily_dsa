void recu(vector<int>&arr, int i){
    if(i>=arr.size()/2){
        return;
    }
    swap(arr[i],arr[arr.size()-i-1]);
    
    recu(arr,i+1);
}

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        recu(arr,0);
    }
};