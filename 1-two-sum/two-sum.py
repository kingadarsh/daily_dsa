class Solution:
    def twoSum(self, nums: List[int], t: int) -> List[int]:
        dict={}

        for i in range(0,len(nums)):
            val=t-nums[i]
            if val in dict:
                return list((i,dict[val]))      
            else:
                dict[nums[i]]=i
                # len(dict)==0 or
        