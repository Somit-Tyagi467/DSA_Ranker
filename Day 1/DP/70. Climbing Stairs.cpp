class Solution {
public:
    int ways(int n,vector<int>& dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        int take=ways(n-1,dp);
        int nottake = ways(n-2,dp);
        return dp[n]=take+nottake;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return ways(n,dp);
    }
};
//revision
class Solution {
public:
    int ways(int n,vector<int>& dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        int take=ways(n-1,dp);
        int nottake = ways(n-2,dp);
        return dp[n]=take+nottake;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return ways(n,dp);
    }
};