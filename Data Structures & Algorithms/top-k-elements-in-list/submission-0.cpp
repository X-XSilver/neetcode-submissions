class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq_counts;
        vector<int> freq_ord_nums;
        for(int num : nums)
        {
            if(freq_counts.count(num))
            {
                freq_counts[num]++;
            }
            else
            {
                freq_counts[num] = 1;
            }
        }

        for(int i = 0; i < k; i++)
        {
            auto max_it = max_element(freq_counts.begin(), freq_counts.end(),
                                        [](const auto& p1, const auto& p2)
                                        {
                                            return p1.second < p2.second;
                                        });
            
            freq_ord_nums.push_back(max_it->first);
            freq_counts.erase(max_it->first);
        }
        return freq_ord_nums;
    }
};
