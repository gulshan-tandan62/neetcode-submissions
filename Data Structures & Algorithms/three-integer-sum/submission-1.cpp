class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i-1]==nums[i])continue;
            int j=i+1;
            int k= n-1;
            while(j<k)
            {
                
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0) {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j])j++;
                    while(j<k && nums[k+1]==nums[k])k--;
                }
                else if(sum>0)k--;
                else j++;
            }
        }
        return res;
    }
};
