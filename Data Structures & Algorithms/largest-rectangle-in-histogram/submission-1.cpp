class Solution {
    vector<int>PSE(vector<int>& heights)
    {
        int n = heights.size();
        vector<int>res(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            
                if(!st.empty()) res[i] = st.top();
                st.push(i);
            
        }
        return res;
    }
      vector<int>NSE(vector<int>& heights)
    {
        int n = heights.size();
        vector<int>res(n,n);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            
                if(!st.empty()) res[i] = st.top();
            st.push(i);
        }
        return res;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>pse = PSE(heights);
       
        vector<int>nse = NSE(heights);
        
        
        int maxArea = 0;    
        for(int i=0;i<n;i++)
        {
            int area = (nse[i]-pse[i]-1)*heights[i];
            maxArea = max(area,maxArea);
        }
        return maxArea;

    }
};
