class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        vector<int> charat(26,0);
        int j=0;
        while(j<sentence.size()){
            charat[sentence[j]-'a']++;
            j++;
        }
        for(int i =0;i<26;i++){
            if(charat[i]==0) return false;
        }
        return true;
    }
};