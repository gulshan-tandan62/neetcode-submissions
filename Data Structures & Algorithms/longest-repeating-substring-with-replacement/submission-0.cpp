class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxlen = 0;
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=i;j<n;j++)
            {
                freq[s[j]-'A']++;
                int maxFreq= 0;
                for(int x =0;x<26;x++)
                {
                    maxFreq = max(maxFreq,freq[x]);
                }
                int len = j-i+1;
                int changes = len - maxFreq;
                if(changes<=k)
                 maxlen = max(maxlen,len);
            }
        }
        return maxlen;
    }
};
