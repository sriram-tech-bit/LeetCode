class Solution {
public:
  int count(int i,int sum,vector<int>&arr,int target,int n){
    
     if(i==n){
        if(sum==target){
           return 1; 
        }
        else{
        return 0;
        }
     }
     int c=0;
    c+= count(i+1,sum+arr[i],arr,target,n);
    c+=count(i+1,sum-arr[i],arr,target,n);
     return c;


  }
    int findTargetSumWays(vector<int>& nums, int target) {
     int n=nums.size();
     int sum=0;
      
    int m= count(0,sum,nums,target, n);
    return m;

    }



};