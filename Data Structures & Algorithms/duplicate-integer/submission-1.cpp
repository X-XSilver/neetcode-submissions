class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> unique_nums;

       for(int num : nums)
       {
        unique_nums.insert(num);
       }

       if(unique_nums.size() == nums.size())
       {
        return false;
       }

       return true;
    }
};