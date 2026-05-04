class Solution {
public:
    char findTheDifference(string s, string t) {
       int m=0;
        for(char c:s)m^=c;
        for(char c:t)m^=c;
        return m;
        
    }
};

