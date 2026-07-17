#include <unordered_map>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> nums_so_far;
        std::vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if(nums_so_far.count(diff))
            {
                ans.push_back(nums_so_far[diff]);
                ans.push_back(i);
            }
            nums_so_far[nums[i]] = i;
            
        }
        return ans;
    }
};
