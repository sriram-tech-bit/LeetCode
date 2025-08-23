class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int sum=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int large=*max_element(arr.begin(),arr.end());
        int low=large;
        int high=sum;
        
        while(low<=high){
            int mid=(low+high)/2;
            int pages=0;
             int count=0;
           for(int i=0;i<arr.size();i++){
               pages+=arr[i];
               if(pages>mid){
                   count++;
                   pages=arr[i];
               }
           }
           if(count<k){
               ans=mid;
               high=mid-1;
           }
           else{
               low=mid+1;
           }
            
        }
         return ans;
    }
};