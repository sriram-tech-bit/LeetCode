class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
   String [] words =sentence.split(" ");
    String res="";
   
    for(String s:words){
     
      String replaced=s;
      int n=Integer.MAX_VALUE;
     for(String k:dictionary){
        
        if(s.startsWith(k)==true && k.length()<n ){
            n=k.length();
            replaced=k;
        }
        
     }
     
        res+=replaced+" ";
     

    }
         
      return res.trim();  
    }
}