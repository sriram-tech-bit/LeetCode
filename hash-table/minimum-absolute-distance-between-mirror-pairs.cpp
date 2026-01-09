class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
           unordered_map<int,int>hm;
           int ans=INT_MAX;
           bool flag=false;
           for(int i=0;i<nums.size();i++){
            int k=nums[i];
           if(hm.find(nums[i])!=hm.end()){
              int d=abs(i-hm[nums[i]]);
               ans=min(ans,d);
               flag=true;

           }
           else{
            int num=0;
               while(k>0){
             
               num=num*10+k%10;

               k=k/10;

               }
               hm.insert({num,i});

           }

           }
           if(flag==false){
            return -1;
           }
          
           return ans;
    }
       
};