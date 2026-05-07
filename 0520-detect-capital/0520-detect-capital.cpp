/*class Solution {
public:
    bool allCapital(string word){
    for(char &ch: word){
        if(ch<'A'|| ch>'Z'){
            return false;
        }  
    }
        return true;
    
}
    
    bool allSmall(string word){
        for(char &ch: word){
            if(ch<'a' ||ch>'z'){
                return false;
            }
        }
        
            return true;
        }
    
        bool detectCapitalUse(string word){
            if(allCapital(word)||allSmall(word)||allSmall(word.substr(1))){
                return true;
            }
        
            return false;
        
    }
};*/



//2nd option
class Solution{
    public:
    bool detectCapitalUse(string word){
        int countCapitals=0;
        for(char &ch:word){
            if(isupper(ch))
            countCapitals++;
        }
        //using loop
        if(countCapitals==0 || countCapitals==word.length()||(countCapitals==1 && isupper(word[0])))
        return true;
        
        return false;
    }
};