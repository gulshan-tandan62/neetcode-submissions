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
        stack<double>st;
        for(int i=n-1;i>=0;i--)
        {
            if(!st.empty() && st.top()>=time[i].second)continue;
             st.push(time[i].second);
        }
        return st.size();
    }
};
