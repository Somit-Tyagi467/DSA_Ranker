class Solution {
public:
    int solve(int num,vector<int>& dp){
        if(num==1 || num ==0) return num;
        if(dp[num]!=-1) return dp[num];
        return dp[num]=solve(num-2,dp)+solve(num-1,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};
//without dp takes more time
class Solution {
public:
    int solve(int num){
        if(num==1 || num ==0) return num;
        return solve(num-2)+solve(num-1);
    }
    int fib(int n) {
        return solve(n);
    }
};