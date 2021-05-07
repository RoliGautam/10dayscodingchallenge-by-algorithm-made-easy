class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();  //eg - k = 3 and size = 7 .. so k = 3%7 = 3
        //first reverse array from start to k-1
       reverse(nums.begin(),nums.end()-k);
        //second reverse array from k-1 to end
       reverse(nums.end()-k,nums.end());
        //now reverse whole array from start to end...
       reverse(nums.begin(),nums.end());


    }


};
