class Solution {
public:
    void moveZeroes(vector<int>& arr) {

     int i =0;int j=0;
     int n=arr.size();

     while(j<n and arr[j]!=0)j++;
     i=j+1;
     while(i<n){
        while(j<n and arr[j]!=0)j++;
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
        }
        i++;
     }

    }
};