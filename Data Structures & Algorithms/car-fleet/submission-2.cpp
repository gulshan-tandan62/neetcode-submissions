class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        vector<pair<int,double>>time(n);
        for(int i=0;i<n;i++)
        {
            time[i] = {position[i],(double(target-position[i])/speed[i])};
        }
        sort(time.begin(),time.end());

        int fleet = 0;
        for(int i=n-1;i>=0;i--)
        {
            bool canfleet = false;
            for(int j=i+1;j<n;j++)
            {
                if(time[i].second<=time[j].second){
                    canfleet = true;
                    break;
                }
            }
            if(!canfleet) fleet++;
        }
        return fleet;
    }
};
