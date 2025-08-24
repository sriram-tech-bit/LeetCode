class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<ans){
                ans=arr[mid];
            }
           if(arr[mid]>=arr[0] && arr[mid]>=arr[arr.size()-1]){
             low=mid+1;
           }
           else{
            high=mid-1;
           }
        }
        return ans;
    }
};