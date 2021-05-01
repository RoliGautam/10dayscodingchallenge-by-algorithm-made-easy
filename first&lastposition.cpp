class Solution {

public:
    vector<int>searchRange(vector<int>& nums, int target) {
        vector<int> result(2);
        result[0] = firstposition(nums, target);
        result[1] = lastposition(nums, target);
        return result;

    }

     int firstposition(vector<int>& nums, int target)
    {
         int ans = -1;
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end){
        int mid =start + (end-start) / 2;
        if (nums[mid] < target)
            start = mid + 1;
        else if (nums[mid] > target)
            end= mid - 1;
        else  {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
    }

     int lastposition(vector<int>& nums, int target)
    {
         int ans = -1;
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end){
        int mid =start + (end-start) / 2;
        if (nums[mid] < target)
            start = mid + 1;
        else if (nums[mid] > target)
            end = mid - 1;
        else  {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
    }

};
