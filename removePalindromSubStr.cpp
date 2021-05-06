class Solution {
public:
    int removePalindromeSub(string s) {

        if(s.length() == 0) //if string is empty then return 0..
            return 0;

          int len=s.size();

        for(int i=0; i<=len/2; i++){

          //not palindrome then 2 operation is needed.
            if(s[i] != s[len-i-1])
                return 2;
        }

        // If s is palindrome return 1 because only operation is needed
        return 1;

    }
};
