class Solution {
    public String reverseWords(String s) {
        String words[]=s.trim().split("\\s+");
         String res="";
         int n=words.length;
         for(int i=n-1;i>=0;i--){
             if(i!=0){
                res+=words[i]+" ";
             }
             else{
                res+=words[i];
             }

         }
        return res;

    }
}