class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_word = 0;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(char word:sentences[i]){
                if(word ==' '){
                    count++;
                }
            }
            max_word = max(max_word,count);
        }
        return max_word;
    }
};