class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int total=0;
       int n=arr.size();
       for(int i=0;i<n;i++){
         int occ=(i+1)*(n-i);
         total+=arr[i]*((occ+1)/2);
       } 
       return total;
    }
};