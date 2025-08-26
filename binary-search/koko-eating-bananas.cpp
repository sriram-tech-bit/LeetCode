class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int k) {
    int n=arr.size();

    sort(arr.begin(),arr.end());
    int low=1;
    int high=arr[n-1];
    int ans=INT_MAX;
           while(low<=high){
            int mid=(low+high)/2;
           
            if(check(arr,mid,k)){
                ans=mid;
               high=mid-1;
            }
              else{
              low=mid+1;
               }
            
            
           } 
           return ans;
    }

  bool check(vector<int>&arr,int mid,int k){
        long sum=0;
        for(long i=0;i<arr.size();i++){
            long res=(arr[i]+mid-1)/mid;
            sum+=res;
        }
        if(sum<=k){
            return true;
        }
        else{
            return false;
        }

  }



};