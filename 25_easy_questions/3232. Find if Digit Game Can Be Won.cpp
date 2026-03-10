class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice = 0;
        int bob = 0 ;
        for(int &num : nums){

            if(num/10==0) alice+=num;

            else bob+=num;
        }
        if(alice==bob) return false;
        return true;
    }
};