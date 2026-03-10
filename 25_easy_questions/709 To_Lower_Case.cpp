class Solution {
public:
    string toLowerCase(string s) {
        for(char &alpha :s){
            if(alpha>64 && alpha<91){
                alpha+=32;
            }
        }
        return s;
    }
};