class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq_counts;
        vector<vector<int>> freq_ord(nums.size() + 1);
        for(int num : nums)
        {
            freq_counts[num]++;
        }

        for(const auto& pair : freq_counts)
        {
            freq_ord[pair.second].push_back(pair.first);
        }

        vector<int> top_k_freqs;
        for(int i = freq_ord.size() - 1; i > 0; --i)
        {
            for(int n : freq_ord[i])
            {
                top_k_freqs.push_back(n);
                if (top_k_freqs.size() == k)
                {
                    return top_k_freqs;
                }
            }
        }
        return top_k_freqs;
    }
};
