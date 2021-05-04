class Solution {
public:
    bool isPalindrome(int x) {

          if (x < 0) //if number is negative return false...
          {
             return false;
          }else {
            long long rev = 0, t = x;
            while (t) {
                int rem = t%10;
                rev = rev * 10 + t % 10;
                t /= 10;
            }
            return x == rev ? true : false;
            //if rev = x then return true otherwise false..
        }

    }

};


