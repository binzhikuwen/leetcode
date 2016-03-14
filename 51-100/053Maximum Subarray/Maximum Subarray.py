#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/maximum-subarray/
# Author : bin bin
# Date   : 2016-01-25

# 
# Find the contiguous subarray within an array (containing at least one number) 
# which has the largest sum.
# 
# For example, given the array [-2,1,-3,4,-1,2,1,?5,4],
# the contiguous subarray [4,-1,2,1] has the largest sum = 6.
# 
# More practice:
# 
# If you have figured out the O(n) solution, try coding another solution using 
# the divide and conquer approach, which is more subtle.
# 
#               



class Solution:
	def maxSubArray(self, nums):
		res = self.maxsum(nums,0,len(nums))
		return res
	def maxsum(self,nums,x,y):
		if y-x==1:
			return nums[x]
		m = x + (y-x)/2
		# [x,m) [m,y)
		maxL = self.maxsum(nums,x,m)
		maxR = self.maxsum(nums,m,y)
		# max = (a if a > b else b)
		# max = (a > b and a or b) 0>-1 and 0 or -1 error
		max = maxL if maxL > maxR else maxR
		v = 0
		L = nums[m-1]
		for i in range(m-1,x-1,-1):
			v += nums[i]
			if v > L:
				L = v
		v = 0
		R = nums[m]
		for i in range(m,y):
			v += nums[i]
			if v > R:
				R = v
		return max if max > (L+R) else (L+R)