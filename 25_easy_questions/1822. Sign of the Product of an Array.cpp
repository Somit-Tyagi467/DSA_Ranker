class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long product=1;
        for(const int &num : nums){
            if(num<0){
                product*=-1;
            }
            else if(num==0){
                product=0;
                return signFunc(product);
            }
            else{
                product*=1;
            }
        }
        return signFunc(product);
    }
    int signFunc(int product){
        return product>0?1:product==0?0:-1;
    }
};