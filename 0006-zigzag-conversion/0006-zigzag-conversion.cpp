class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;

        }
        string ans;
        int n=s.size();
        int charisection=2*(numRows-1);
        for(int currRow=0; currRow<numRows; currRow++){
            int index=currRow;
            while(index<n)
            {
                ans+=s[index];
                if(currRow!=0 && currRow!=numRows-1){
                    int chainbetween=charisection-2*(currRow);
                    int secondindex=index+chainbetween;
                    if(secondindex<n){
                        ans+=s[secondindex];
                    }
                }
                index+=charisection;
            }
        }
        return ans;
        
    }
};