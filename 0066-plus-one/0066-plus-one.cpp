class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p=digits.size();
        int n=p-1;
        while(n>=0){
            if(digits[n]<9){
                digits[n]+=1;
                return digits;

            }
            digits[n]=0;
            n--;
            
        }
        digits.insert(begin(digits), 1);
        return digits;
    }
};