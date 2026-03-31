class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>freq;
        for(auto ch : s)
        {
            freq[ch]++;
        }
        for(auto ch : t)
        {
            if(freq.count(ch)) 
            {
                freq[ch]--;
                if(freq[ch]==0) freq.erase(ch);
            }
            else return false;
        }
        return freq.size()==0;
    }
};
