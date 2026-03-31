class Solution {
public:

    string encode(vector<string>& strs) {
       
        string encoded = "";
        for(auto str : strs)
        {
            encoded += to_string(str.size())+"#" +str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.size())
        {
            int j = i;
            
            while(j<s.size() && s[j]!='#')
            {
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            res.push_back(word);
            i = j+len+1;
        }
        return res;
    }
};
