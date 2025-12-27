class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     priority_queue<int>mah;
       for(auto k:nums){
          mah.push(k);
       } 
    int ans=0;
      if(mah.size()>=3){
        int p1=mah.top();
        mah.pop();
     int p2=mah.top();
     mah.pop();
      int p3=mah.top();
      mah.pop();
      ans=(p1*p2*p3);
      }

    
    return ans;

    }
};