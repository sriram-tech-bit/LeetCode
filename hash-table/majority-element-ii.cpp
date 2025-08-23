class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>temp;
        if(nums.size()==1){
            return nums;
        }
         int ele1=nums[0];
         int ele2=nums[1];
      int freq1=1;
      int freq2=1;

      int count=0;
      for(int i=2;i<nums.size();i++){
        if(nums[i]==ele1){
            freq1++;
        }
        else if(nums[i]!=ele1){
            freq1--;
        }
        if(freq1==0){
            ele1=nums[i];
            freq1=1;
        }
        if(nums[i]==ele2){
            freq2++;
        }
        else if(nums[i]!=ele2){
            freq2--;
        }
        if(freq2==0){
            ele2=nums[i];
            freq2=1;
        }
      } 
         for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1 || nums[i]==ele2){
                count++;
            }
         }
        
         if(count>(nums.size()/3)){
            if(ele1!=ele2){
          temp.push_back(ele1);
           temp.push_back(ele2);
          
         }
         else{
             temp.push_back(ele2);
         }
         } 
         
         return temp;
    }
    
};