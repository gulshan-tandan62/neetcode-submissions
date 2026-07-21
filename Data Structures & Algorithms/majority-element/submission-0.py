class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        num = 0
        count = 0
        for i in range(0,n):
            if count == 0:
                num = nums[i]
                count+=1
            else:
                if nums[i]!=num:
                    count-=1
                else:
                    count+=1
        return num