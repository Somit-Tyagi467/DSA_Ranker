class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const string &word : words ){
            int left = 0;
            int right = word.size()-1;
            while(right>left && word[left]==word[right]){
                left++;
                right--;
            }
            if(left>=right){
                return word;
            }
        }
        return "";
    }
};