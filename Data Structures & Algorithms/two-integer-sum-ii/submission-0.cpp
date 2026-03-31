class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=1;i<=numbers.size();i++)
        {
            for(int j=1;j<=numbers.size();j++)
            {
                if(numbers[i-1]+numbers[j-1] == target) return {i,j}; 
            }
        }
        return {-1,-1};
    }
};
