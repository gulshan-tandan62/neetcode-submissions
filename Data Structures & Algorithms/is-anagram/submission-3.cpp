class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        unordered_map<int,int>mpp;
        for(auto x : s)
        {
            mpp[x]++;
        }
        for(auto x : t)
        {
            if(!mpp.empty() && (!mpp.count(x) || mpp[x]==0)) return false;
            else mpp[x]--;
        }

        for(auto ch : mpp)
        {
            if(ch.second>1) return false;
        }
        return true;

    }
};
