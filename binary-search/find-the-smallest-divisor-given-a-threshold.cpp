class Solution {
public:
    int smallestDivisor(vector<int>& arr, int k) {
    int n=arr.size();

    sort(arr.begin(),arr.end());
    int low=arr[0];
    int high=arr[n-1];
    int ans=INT_MAX;
           while(low<=high){
            int mid=(low+high)/2;
            if(mid<ans){
            if(check(arr,mid,k)){
                ans=mid;
               high=mid-1;
            }
              else{
              low=mid+1;
               }
            }
            
           } 
           return ans;
    }

  bool check(vector<int>&arr,int mid,int k){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            int res=(arr[i]+mid-1)/mid;
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