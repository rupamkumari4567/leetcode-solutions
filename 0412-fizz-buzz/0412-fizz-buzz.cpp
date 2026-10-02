class Solution {
public:
 vector<string> fizzBuzz(int n) {
        vector<string>list;
for(int i=1; i<=n; i++) {
   bool is3=(i%3==0);
     bool is5=(i%5==0);
    if(is3 && is5){
        list.push_back("FizzBuzz");

    }
    else if(is3){
        list.push_back("Fizz");

    }
    else if(is5){
        list.push_back("Buzz");
    }
    else{
        list.push_back(to_string(i));
    }
} 

return list;
 }

};