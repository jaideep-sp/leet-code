
class Solution {
public:
    string interpret(string command) {
        string t;
        for(int i=0; i<command.size();){
            if(command[i]=='G'){
                t += 'G';
                ++i; 
            }
       else if(command[i+1] == ')'){
                t += 'o';
                i += 2;
            }
            else{
                t += "al";
                i += 4;
            }
        }
        return t;
    }
};


/*

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Goal Parser Interpretation.
Memory Usage: 6.1 MB, less than 57.97% of C++ online submissions for Goal Parser Interpretation.


*/
