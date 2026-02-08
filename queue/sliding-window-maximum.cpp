class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      vector<int>res;
      int l=0;
      int r=0;
      int n=nums.size();
      deque<int>maxdeque;
      while(r<n && l<n){
     while(r-l+1>k){
        res.push_back(maxdeque.front());
        l++;

        }

        


     while(maxdeque.size()!=0 && nums[r]>maxdeque.back()){
             maxdeque.pop_back();
         }
         maxdeque.push_back(nums[r]);

       

    
     r++;
      }

      if(r-l+1>k){
        res.push_back(maxdeque.front());
      }
      return res;

    }
};