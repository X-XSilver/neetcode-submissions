class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int total_prod;
        bool is_prod_set = false;
        int zero_count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0 && !is_prod_set)
            {
                total_prod = nums[i];
                is_prod_set = true;
            }
            else if (nums[i] != 0)
            {
                total_prod *= nums[i];
            }
            else
            {
                zero_count++;
            }
        }

        vector<int> prods;

        for(int i = 0; i < nums.size(); i++)
        {
            if(zero_count > 1)
            {
                prods.push_back(0);
            }
            else if (zero_count == 1)
            {
                if(nums[i] != 0)
                {
                    prods.push_back(0);
                }
                else
                {
                    prods.push_back(total_prod);
                }
            }
            else
            {
                prods.push_back(total_prod / nums[i]);
            }
        }

        return prods;

    }
};
