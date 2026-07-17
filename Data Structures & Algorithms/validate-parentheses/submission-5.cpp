class Solution {
public:
    bool isValid(string s) {

        stack<char> exp_parens;

        unordered_map<char,char> parens = {{'{','}'},{'[',']'},{'(',')'}};
        
        if(s.size() % 2 != 0)
        {
            return false;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(parens.count(s[i]))
            {
                exp_parens.push(parens[s[i]]);
            }
            else if(exp_parens.empty() || exp_parens.top() != s[i])
            {
                return false;
            }
            else
            {
                if(!exp_parens.empty())
                {
                    exp_parens.pop();
                }
            }
        }

        if(exp_parens.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
