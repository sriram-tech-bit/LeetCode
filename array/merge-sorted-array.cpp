class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
vector<int>copy(m+n);
int k=0;
  for(int i=0;i<m;i++){
    
      copy[k]=nums1[i];
      k++;
    
  }
  
  for(int j=0;j<n;j++){
    
    copy[k]=nums2[j];
    k++;
    
  }

  sort(copy.begin(),copy.end());
    
   for(int i=0;i<copy.size();i++){
    nums1[i]=copy[i];
   }
    }

};