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
           if(st.find(nums[i]-1)==st.end())
           {
            int count= 1;
            int num = nums[i];
            while(st.find(num+1)!=st.end())
            {
                count++;
                num++;
            }
            maxlen = max(maxlen,count);
           }
           
        }
        return maxlen;
    }
};
