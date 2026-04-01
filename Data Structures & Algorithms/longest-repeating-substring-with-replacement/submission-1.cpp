class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxlen = 0;
       int l=0;
       int r =0;
       unordered_map<char,int>freq;
       int maxFreq =0;
       while(r<n)
       {
            freq[s[r]-'A']++;
            maxFreq= max(maxFreq,freq[s[r]-'A']);
            while((r-l+1)-maxFreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            
            maxlen = max(maxlen,r-l+1);
            r++;
       }
        return maxlen;
    }
};
