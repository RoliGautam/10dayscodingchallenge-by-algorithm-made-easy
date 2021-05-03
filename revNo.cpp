class Solution {
public:
    int reverse(int x) {
          long long rev = 0;
        while (x) {
                //remainder = x%10...

            rev = rev * 10 + x % 10;

            x /= 10;
        }
        return rev > INT_MAX || rev < INT_MIN ? 0 : rev;

    }
};
