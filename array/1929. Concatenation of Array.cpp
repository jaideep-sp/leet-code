class Solution {
public:
    vector<int> getConcatenation(vector<int>& vector1) {
        vector1.insert( vector1.end(), vector1.begin(), vector1.end() );
        return vector1;
    }
};


/*
Runtime: 15 ms, faster than 15.87% of C++ online submissions for Concatenation of Array.
Memory Usage: 12.7 MB, less than 61.15% of C++ online submissions for Concatenation of Array.
*/
