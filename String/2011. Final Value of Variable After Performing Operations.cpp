
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int s=operations.size();
        int val(0);
        for(int i=0; i<s; i++){
          if(operations[i]=="X--"){
              val--;
          }
           if(operations[i]=="X++"){
              val++;
          }  
           if(operations[i]=="--X"){
              --val;
          }  
           if(operations[i]=="++X"){
              ++val;
          }  
        }    
        return val;
    }
};
