class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
        {
            return false;
        }

        vector<int> s_alphs(26,0);

        for(char c : s)
        {
            int which_alph = c - 'a';
            s_alphs[which_alph]++;
        }

        vector<int> t_alphs(26,0);

        for(char c : t)
        {
            int which_alph = c - 'a';
            t_alphs[which_alph]++;
        }
        
        return t_alphs == s_alphs;
    }
};
