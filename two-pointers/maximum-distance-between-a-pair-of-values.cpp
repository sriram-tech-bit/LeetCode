class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
      int p1=0;
      int p2=0;
      int max=0;
         while(p1<nums1.size() && p2<nums2.size()){
            if(nums1[p1]<=nums2[p2] && p1<=p2){
                  int res=p2-p1;
                    p2++;
                  if(res>max){
                    max=res;
                  }
            
            }
           else if(p1>p2){
                p2++;
            }
            else{
                p1++;
            }
         }
         return max;
    }
};