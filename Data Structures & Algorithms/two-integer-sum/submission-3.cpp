class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> needed_sums;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
            needed_sums[target - nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if (needed_sums.count(nums[i]) && i != needed_sums[nums[i]])
            {
                res = {i, needed_sums[nums[i]]};
                return res;
            }
        }
        return res;
    }
};
