#!/usr/bin/env python
#-#-coding:utf-8-#-


# Source : https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
# Author : bin bin
# Date   : 2016-01-26

# 
# Follow up for "Remove Duplicates":
# What if duplicates are allowed at most twice?
# 
# For example,
# Given sorted array A = [1,1,1,2,2,3],
# 
# Your function should return length = 5, and A is now [1,1,2,2,3].
# 
#               



class Solution:
	def removeDuplicates(self, nums):
		if not(len(nums)):
			return	0
		tmp = nums[0]
		res = 1
		dup = 0
		for i in range(1,len(nums)):
			if tmp == nums[i]:
				dup += 1
				if dup <= 1:
					nums[res] = nums[i]
					res += 1
			else:
				nums[res] = nums[i]
				tmp = nums[i]
				dup = 0
				res += 1
		return res
		
A = [1,1,1,2,2,3]
s = Solution()
print s.removeDuplicates(A)
        