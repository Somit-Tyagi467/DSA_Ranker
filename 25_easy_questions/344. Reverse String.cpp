class Solution {
public:
    int solve(vector<char>& s,int l,int r){
        if(l>=r) return 0;
        int temp=s[l];
        s[l]=s[r];
        s[r]=temp;
        return solve(s,l+1,r-1);

    }
    void reverseString(vector<char>& s) {
        solve(s,0,s.size()-1);
    }
};