class Solution {
    bool isRepeating(string str)
    {
        unordered_set<char>st;
        for(auto ch : str)
        {
            if(st.count(ch)) return true;
            st.insert(ch);
        }
        return false;
    }
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                string str  = s.substr(i,j-i+1);
                if(!isRepeating(str)){
                    maxlen = max(maxlen,j-i+1);
                }
                else break;
            }
        }
        return maxlen;
    }
};
