class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        string hex_chars="0123456789abcdef";
        string res="";
     uint32_t n=num;
        while(n>0){
            res=hex_chars[n & 15] + res;
            n>>=4;
        }
        return res;
        
    }
};