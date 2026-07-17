class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        vector<int> prods;
        int pref_prod = 1;
        int post_prod = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            prods.push_back(pref_prod);
            pref_prod *= nums[i];
        }

        for(int i = nums.size() - 1; i >= 0; --i)
        {
            prods[i] *= post_prod;
            post_prod *= nums[i];
        }

        return prods;

    }
};
