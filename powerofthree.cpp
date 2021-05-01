class Solution {
public:
    bool isPowerOfThree(int n) {

        //we will apply conditions only when our number is greater or equal to 3..
        while(n>=3){

        //if remainder is not 0 that means, it is not divisible by 3 so return false
            if(n%3 != 0)  return false;

            //otherwise reduce our number by dividing...
            n = n/3;
        }
        //return true if n will be 1 after dividing by 3...
        return n == 1;

    }
};
