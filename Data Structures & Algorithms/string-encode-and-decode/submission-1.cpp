class Solution 
{

public:
    //vector<int> joints;
    string encode(vector<string>& strs) 
    {
        string s = "";

        for(string str : strs)
        {
            s.append(to_string(str.size()) + "#");
            s.append(str);
        }
        
        return s;
        
    }

    vector<string> decode(string s) 
    {
        vector<string> deco_strs;

        int i = 0; 
        
        while(i < s.size())
        {
            int j = i;

            while(s[j] != '#')
            {
                j++;
            }

            int len = stoi(s.substr(i,j - i));

            deco_strs.push_back(s.substr(j + 1, len));

            i = j + 1 + len;
        }
       // int prev_joint = 0;

        //for(int joint : joints)
        //{
        //    deco_strs.push_back(s.substr(prev_joint, joint));
        //    prev_joint += joint;
        //}


        return deco_strs;
    }
};
