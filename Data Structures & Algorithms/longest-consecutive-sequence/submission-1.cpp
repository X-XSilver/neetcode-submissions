class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique_nums;

        int max_seq = 0;

        for(int num : nums)
        {
            unique_nums.insert(num);
        }

        for(int num : nums)
        {
            if(!unique_nums.count(num-1))
            {
                int seq_len = 0;
                int elm_num = num;

                while(unique_nums.count(elm_num))
                {
                    seq_len++;
                    elm_num++;
                }

                if(seq_len > max_seq)
                {
                    max_seq = seq_len;
                }
            }
        }
        return max_seq;
    }
};
