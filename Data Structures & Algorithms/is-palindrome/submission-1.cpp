class Solution {
public:
    bool isPalindrome(string s) {
        
            string str;
            for(int i = 0; i < s.size(); i++)
            {
                int ascii = tolower(s[i]);
                //cout << ascii;
                if(ascii >= 97 && ascii <= 122 || ascii >= 48 && ascii <= 57)
                {
                    str += s[i];
                }
            }
            //cout << str.size();
            for(int i = 0; i < str.size()/2; i++)
            {
                char c1 = tolower(str[i]);
                char c2 = tolower(str[str.size() - 1 - i]);
                if(c1 != c2)
                {
                    return false;
                }
            }
            return true;
    }
};
