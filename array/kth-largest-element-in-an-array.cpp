class Solution {
public:
 void heap(vector<int>&arr,int i,int n){
         while(2*i+1<n){
         int min=2*i+1;
         if(2*i+2<n && arr[2*i+1]>arr[2*i+2]){
             min=2*i+2;
         }
         if(arr[i]<=arr[min]){
             break;
         }
         else{
             swap(arr[i],arr[min]);
            i=min;
        
         }
         
     }
     }


    int findKthLargest(vector<int>& arr, int k) {
         int n=arr.size();
      for(int i=n-1;i>=0;i--){
          heap(arr,i,n);
      }
       int dup=n;
        while(dup>0){
             swap(arr[0],arr[dup-1]);
              dup--;
             heap(arr,0,dup);
            
        }
        int ans=0;
         for(int i=0;i<k;i++){
            ans=arr[i];
         }
        return ans;
    }
};