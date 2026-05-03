class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        /*int n=ransomNote.length();
        int m=magazine.length();
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(n[i]!=m[j]){
                return false;
            }
            else if(n[i]==m[j]){
                return true;

            }
            else if(n[i+1]==m[j]){
                return true;
            }
        
       return true; */



       sort(ransomNote.begin(), ransomNote.end());
       sort(magazine.begin(), magazine.end());
       int i=0;
       int j=0;
       while(i<ransomNote.size() && j<magazine.size() ){
        if(ransomNote[i]==magazine[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
       }
       return i==ransomNote.size();
    }
};


