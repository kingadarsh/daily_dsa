class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:

        dict={}

        for i in range(0,len(nums)):
            if len(dict)==0 or nums[i] not in dict :
                dict[nums[i]]=1
            else :
                return True
        return False