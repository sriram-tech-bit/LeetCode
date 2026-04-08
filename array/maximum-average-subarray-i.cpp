class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int sum=0;
      
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
       double ans=(double)sum /k;
        int s=0;
        int e=k;
        while(e<arr.size()){
           sum-=arr[s];
           sum+=arr[e];
            e++;
            s++;
            ans=max((double)sum/k,ans);
            
        }
        
        
        return ans;

    }
};