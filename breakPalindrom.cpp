class Solution {
public:
    string breakPalindrome(string palindrome) {
          int n = palindrome.size(); //to find the size of string..

        if (n == 1) return ""; // if string is only 1 character...

        for (int i = 0; i < n / 2; ++i) {

            if (palindrome[i] != 'a') {

                palindrome[i] = 'a';

                return palindrome;
            }
        }
        palindrome.back() = 'b';  //back() function is to find last element..
        return palindrome;
    }
};
