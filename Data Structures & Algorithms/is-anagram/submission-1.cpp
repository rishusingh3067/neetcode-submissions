class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f;
        unordered_map<char,int>p;
        for(int i=0;i<s.length();i++)
        {
            f[s[i]]++;
        }
         for(int i=0;i<t.length();i++)
        {
            p[t[i]]++;
        }
        if(f.size()!=p.size())
        {
            return false;
        }
        for(auto i:f)
        {
            char c = i.first;
            int a = i.second;
            int b = p[c];
            if(a>b)
            {
                return false;
            }
        }
        return true;

    }
};
