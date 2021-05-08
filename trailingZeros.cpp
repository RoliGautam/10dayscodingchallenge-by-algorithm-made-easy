class Solution {
public:
    int trailingZeroes(int n) {

        int res = 0;
        for(int i = 5; i<=n; i= i*5){
            res = res+(n/i);
        }
        return res;

    }
};

// as we are increasing i by 5 so .. i=  5^1,< 5^2, 5^3...5^k
// so, as i<=n  => 5^k<=n =>k<=log5(n) =>time complexity is log(n)
