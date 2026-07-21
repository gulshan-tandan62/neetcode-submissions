class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto str : strs)
        {
            int len = str.size();
            res += to_string(len)+'#'+str;
        }
        return res;

    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string>res;
        for(int i=0;i<n;)
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len =stoi(s.substr(i,j-i));
            i=j+1;
            string word = s.substr(i,len);
            res.push_back(word);
            i += len;
        }
        return res;
    }
};
