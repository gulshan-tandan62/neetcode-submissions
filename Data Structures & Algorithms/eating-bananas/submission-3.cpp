class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxe = INT_MIN;
        for(auto num : piles)
        {
            maxe = max(num,maxe);
           
        }
        int lo = 1;
        int hi = maxe;
        while(lo<hi)
        {
            int mid = lo+(hi-lo)/2;
            int k = 0;
            for(int i=0;i<n;i++)
            {
                k+= piles[i]/mid;
                if(piles[i]%mid!=0)k = k+1;

            }
            if(k<=h) hi = mid;
            else lo = mid+1;
        }
        return hi;
    }
};
