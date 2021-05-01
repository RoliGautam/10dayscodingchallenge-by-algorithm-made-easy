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




//another method to solve it ... using log...
class Solution {
public:
    bool isPowerOfThree(int n) {
          // let a variable a to find the power of 3....
          //here we use log to find power .. eg: log(9)/log(3) = 2.00(which is the power of three)
           double a = log(n) / log(3);
        
        // now check wheather the absolute difference b/t a and round of a is less that (1power(-10)) and if it is that means it is almost near to zero or zero ...
        //hence it is divisible by 3 so return ans which will be true or false. 
        double ans = abs(a - round(a)) < 1e-10;
        return ans;
    }
};
