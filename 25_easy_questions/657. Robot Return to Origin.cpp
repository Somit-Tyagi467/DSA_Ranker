class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0;
        int j=0;
        for(char &move:moves){
            if(move=='U') j++;
            else if(move=='D') j--;
            else if(move=='L') i--;
            else i++;
        }
        return i==0 && j==0;
    }
};