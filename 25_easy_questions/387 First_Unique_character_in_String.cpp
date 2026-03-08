class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> alpha;
        int i=0;
        while(i<s.size()){
            alpha[s[i]]++;
            i++;
        }
        for(int j =0 ;j<s.size();j++){
            if(alpha[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};

// using vector for low resouces usage and faster access time of O(1) everytime instead of O(1) average case of unordered map
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> alpha(128,0);
        int i=0;
        while(i<s.size()){
            alpha[s[i]]++;
            i++;
        }
        for(int j =0 ;j<s.size();j++){
            if(alpha[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
}; 