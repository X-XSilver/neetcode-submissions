class Solution 
{

public:
    vector<int> joints;
    string encode(vector<string>& strs) 
    {
        string s = "";

        for(string str : strs)
        {
            joints.push_back(str.size());
            s.append(str);
        }
        
        return s;
        
    }

    vector<string> decode(string s) 
    {
        vector<string> deco_strs;
        int prev_joint = 0;

        for(int joint : joints)
        {
            deco_strs.push_back(s.substr(prev_joint, joint));
            prev_joint += joint;
        }
        return deco_strs;
    }
};
