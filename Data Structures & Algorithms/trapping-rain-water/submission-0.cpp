class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=  0;
        int r= n-1;
        int lmax=0;
        int rmax = 0;
        int trappedWater  = 0;
        while(l<r)
        {
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);
            if(lmax<rmax){
                trappedWater += lmax - height[l];
                l++;
            }
            else {
                trappedWater += rmax-height[r];
                r--;
            }
        }
        return trappedWater;
    }
};
