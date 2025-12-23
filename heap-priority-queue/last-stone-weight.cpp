class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
     priority_queue<int>ques;
    for(int i=0;i<n;i++){
       ques.push(stones[i]);
    }
     while(ques.size()>1){
        int top1=ques.top();
         ques.pop();
         int top2=ques.top();
         ques.pop();
        if(top1!=top2){
           ques.push(top1-top2);
        }
     }
    return ques.top();



    }
};