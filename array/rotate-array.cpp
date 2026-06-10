class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();
        k=k%n;
         int p1=0;
         int p2=n-1;
         while(p1<=p2){
          swap(nums[p1],nums[p2]);
          p1++;
          p2--;
         }
         int p3=0;
         int p4=k-1;
         while(p3<=p4){
           swap(nums[p3],nums[p4]);
           p3++;
           p4--;  
         }
         int p5=k;
         int p6=n-1;
         while(p5<=p6){
            swap(nums[p5],nums[p6]);
            p5++;
            p6--;
         }
  
    }
};