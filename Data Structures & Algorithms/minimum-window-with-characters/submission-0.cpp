class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
      
        unordered_map<char,int>need;
        for(auto ch : t)
        {
            need[ch]++;
        }
        int required = need.size();
        int start = 0;
        int l = 0;
        int minlen = INT_MAX;
        int have =0 ;
        int r =0;
        unordered_map<char,int>window;
        while(r<n)
        {
            char ch = s[r];
            window[ch]++;
            if(need.count(ch) && need[ch]==window[ch])have++;
            while(have == required){
                if(minlen>r-l+1){
                    minlen = r-l+1;
                    start = l;
                }
                char c = s[l];
                window[c]--;
                if(need.count(c) && window[c]<need[c])
                {
                    have--;
                   
                } l++;
            }
            r++;
        }
        return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};
