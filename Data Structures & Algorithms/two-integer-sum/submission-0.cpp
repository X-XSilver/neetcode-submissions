#include <unordered_map>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> diffs;
        std::vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(diffs.count(target - nums[i]))
            {
                if(i < diffs[target-nums[i]])
                {
                    ans.push_back(i);
                    ans.push_back(diffs[target-nums[i]]);
                }
                else
                {
                    ans.push_back(diffs[target-nums[i]]);
                    ans.push_back(i);
                }
            }
            else
            {
                diffs[nums[i]] = i;
            }
        }
        return ans;
    }
};
