#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        std::unordered_map<char, int> s_count;
        std::unordered_map<char, int> t_count;

        for(char x: s)
        {
            if(s_count.count(x))
            {
                s_count[x]++;
            }
            else
            {
                s_count[x] = 1;
            }
        }
        
        for(char x : t)
        {
            if(t_count.count(x))
            {
                t_count[x]++;
            }
            else
            {
                t_count[x] = 1;
            }
        }
        return s_count == t_count;
        
    }
};
