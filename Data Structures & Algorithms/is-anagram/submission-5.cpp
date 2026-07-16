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
            if(mpp[x]==0) return false;
            else mpp[x]--;
        }

        return true;

    }
};
