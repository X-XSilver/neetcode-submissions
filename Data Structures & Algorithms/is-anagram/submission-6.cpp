class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }

        vector<int> letters_s(26,0);
        vector<int> letters_t(26,0);

        for(int i = 0; i < s.size(); i++)
        {
            int s_ascii = s[i] - 'a';
            int t_ascii = t[i] - 'a';

            letters_s[s_ascii]++;
            letters_t[t_ascii]++;
        }

        if(letters_s == letters_t)
        {
            return true;
        }

        return false;
    }
};
