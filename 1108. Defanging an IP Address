class Solution {
public:
    string defangIPaddr(string address) {
        stringstream s;
        int si=address.size();

        string st="[.]";
        for(int i=0; i<si; i++){

            if(address[i]=='.'){
                   s<<"[.]";
            }
            else{
                s<<address[i];
            }
                  
        }
             return s.str();
        
    }
};


/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
Memory Usage: 6 MB, less than 68.66% of C++ online submissions for Defanging an IP Address.


*/
