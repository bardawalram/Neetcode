class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        for(char ch:s){
            if(isalnum(ch)){
                k+=tolower(ch);
            }
        }
        return k==string(k.rbegin(),k.rend());
        
        
    }
};
