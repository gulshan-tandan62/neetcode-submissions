class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto num : nums)
        {
            st.insert(num);

        }
        int maxlen =0;
        for(int i=0;i<nums.size();i++)
        {
            int count = 1;
            int num = nums[i];
            while(true)
            {
                if(st.count(num+1)) {count++;num +=1;}
                else break;
            }
            maxlen = max(maxlen,count);
        }
        return maxlen;
    }
};
