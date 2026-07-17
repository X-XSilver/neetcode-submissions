#include <algorithm>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> groups;
        unordered_map<string,int> grps_so_far;

        for(int i = 0; i < strs.size(); i++)
        {
            string alph_str = strs[i];
            
            sort(alph_str.begin(), alph_str.end());

            if(grps_so_far.count(alph_str))
            {
                groups[grps_so_far[alph_str]].push_back(strs[i]);
            }
            else
            {
                vector<string> new_grp = {strs[i]};
                grps_so_far[alph_str] = grps_so_far.size();
                groups.push_back(new_grp);
            }
        }
        return groups;
    }
};
