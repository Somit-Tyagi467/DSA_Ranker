/*solution with recursion but it will give tle(time limit exceeded) because of repeating the same calculations again and again
only 55 test cases are passd out of 70 cause of TLE*/

class Solution {
public:
    int solve(int i, vector<int>& arr){
        if(i >= arr.size())
            return 0;
        int rob = arr[i] + solve(i+2, arr);
        int skip = solve(i+1, arr);
        return max(rob, skip);
    }
    int rob(vector<int>& nums) {
        return solve(0, nums);
    }
};

//Same approach but not repeating the same calculations again and again by using dp(dynamic programming)
class Solution {
public:
    int solve(int i, vector<int>& arr , vector<int>& dp){
        if(i >= arr.size())
            return 0;
        if(dp[i]!=-1){
            return dp[i];
        }
        int rob = arr[i] + solve(i+2, arr,dp);
        int skip = solve(i+1, arr,dp);
        return dp[i]=max(rob, skip);
    }
    int rob(vector<int>& nums) {
        vector <int> dp(nums.size(),-1);
        return solve(0, nums,dp);
    }
};