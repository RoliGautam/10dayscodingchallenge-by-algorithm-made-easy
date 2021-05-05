class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

       vector<int>ans;

        int x = 0 , y =  n,count = 0;

        while(count < nums.size()){

            ans.push_back(nums[x++]);

            ans.push_back(nums[y++]);
            count+=2;
        }
        return ans;

    }
};
