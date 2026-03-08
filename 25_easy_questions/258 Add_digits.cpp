class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }
        return num;   
    }
};

// another O(1) solution using trick/pattern

class Solution {
public:
    int addDigits(int num) {
        return num==0?0:1+(num-1)%9;   
    }
};