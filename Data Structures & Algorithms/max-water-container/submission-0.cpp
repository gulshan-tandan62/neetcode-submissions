class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int maxWater = 0;
        while(l<r)
        {
            int wd = r-l;
            int ht = min(nums[r],nums[l]);
            maxWater = max(maxWater,wd*ht);
            if(nums[r]<nums[l]) r--;
            else l++;
        }
        return maxWater;
    }
};
