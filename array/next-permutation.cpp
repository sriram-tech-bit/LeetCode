class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int k=n-1;
        int flag=0;
        int s=0;
        if(n<=1){
            return ;
        }
     for(int i=n-2;i>=0;i--){
         if(arr[i]<arr[k]){
            k=i;
            flag=-1;
            break;
         }
         else{
           k=i;
         }

     }
     if(flag==0){
        int p1=0;
        int p2=n-1;
        while(p1<p2){
            int temp=arr[p2];
            arr[p2]=arr[p1];
            arr[p1]=temp;
            p1++;
            p2--;
        }
        return ;
     }
         for(int j=n-1;j>=0;j--){
            if(arr[j]>arr[k]){
                s=j;
                break;
            }
            }
        swap(arr[k],arr[s]);
        int p1=k+1;
        int p2=n-1;
        while(p1<p2){
            int temp=arr[p2];
            arr[p2]=arr[p1];
            arr[p1]=temp;
            p1++;
            p2--;
        }

         
     
     return ;
    } 
};