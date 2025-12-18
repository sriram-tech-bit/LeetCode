class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
   String [] words =sentence.split(" ");
    String res="";
   
    for(String s:words){
     boolean flag=false;
     char ws=s.charAt(0);
     for(String k:dictionary){
         char ds =k.charAt(0);
        if(s.contains(k)==true && ws==ds ){
          res+=k+" ";
          flag=true;
          break;
         
        }
        
     }
     if(flag==false){
        res+=s+" ";
     }

    }
         
      return res.trim();  
    }
}