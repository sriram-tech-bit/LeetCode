class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
              res[i]=nums[i];
        }
        sort(res.begin(),res.end());
        deque<int>q;
        deque<int>q1(nums.begin(),nums.end());
        for(auto k :res){
           q.push_back(k); 
        }
        int k=0;
         while(q.size()>0 && k<nums.size()){
            int b=q.back();
            
              q.pop_back();
              q.push_front(b);
              if(q==q1){
                return true;
              }
              k++;
         }
         return false;
    }
};