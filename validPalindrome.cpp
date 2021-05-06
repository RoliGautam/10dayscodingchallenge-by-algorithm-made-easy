class Solution {
public:
    bool isPalindrome(string s) {

        if (s.size()==0)
            return false;

        int start = 0;
        int end = s.size()-1;

        while (start<end){

       // isalnum() fun use to check alpha numeric characters and if there is not any alpha numeric characters , we just increase our start and decrease end..

            if (isalnum(s[start])==false){
                start++;
                continue;
            }
            if (isalnum(s[end])==false){
                end--;
                continue;
            }

       //if lower case are not equal from both side that means string is not equal..
            if (tolower(s[end])!=tolower(s[start])){

                return false;
            }else{
                start++;
                end--;
            }
        }

        return true;
    }
};
