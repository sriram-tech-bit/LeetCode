class Solution {
public:
    int countElements(vector<int>& nums, int k) {
    
     unordered_map<int,int>hm;
      for(int i=0;i<nums.size();i++){
         hm[nums[i]]++;
      } 
       vector<int>sol;
       if(hm.size()==1){
        sol.push_back(nums[0]);
       }
       else{
        for(int i=0;i<nums.size();i++){
            sol.push_back(nums[i]);
        }
       }
      

       
     
      
      sort(sol.begin(),sol.end());
     int count=0;
     int n=sol.size()-1;
     for(int i=0;i<=n;i++){
          int val=n-i;
          if(val>=k){
            count++;
          }
     }
        return count;
    }
};