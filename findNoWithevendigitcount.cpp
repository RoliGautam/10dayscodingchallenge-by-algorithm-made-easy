class Solution {
public:
    int findNumbers(vector<int>& nums) {
         int len = 0;
    int i = 0;
    int temp = 0;
    int count = 0;

    len = nums.size();

    for(i = 0;i<len;i++)
    {
        temp = 0;
        while(nums[i]>0)
        {
            nums[i] /= 10;
            temp++;
        }

        if(0 == temp%2)
        {
            count++;
        }
    }

    return count;
    }
};
