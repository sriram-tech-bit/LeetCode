class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
           int mid=(low+high)/2;
           if(arr[mid]==target){
            return mid;
           } 
       if(arr[mid]>=arr[0]){
          if(target>arr[0] && target<arr[mid]){
             high=mid-1;
          }
          else{
            low=mid+1;
          }
      }
      else{
            if(target<=arr[mid] && target<arr[arr.size()-1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

      }

           
      
    }
    return -1;
    }
};