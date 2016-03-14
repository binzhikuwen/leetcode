#!/usr/bin/env python
#-*-coding:utf-8-*-


# Source : https://oj.leetcode.com/problems/sort-colors/
# Author : bin bin
# Date   : 2016-01-26
# 
# Given an array with n objects colored red, white or blue, sort them so that objects of 
# the same color are adjacent, with the colors in the order red, white and blue.
# 
# Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
# 
# Note:
# You are not suppose to use the library's sort function for this problem.
# 
# Follow up:
#  > A rather straight forward solution is a two-pass algorithm using counting sort.
#  > First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array 
#    with total number of 0's, then 1's and followed by 2's.
#  > Could you come up with an one-pass algorithm using only constant space?
#               

class Solution:
	def sortColors(self, nums):
		nred = 0
		nwhite = 0
		nblue = 0
		for i in range(len(nums)):
			if nums[i] == 0:
				nred += 1
			elif nums[i] == 1:
				nwhite += 1
			else:
				nblue += 1
		nwhite += nred
		for i in range(len(nums)):
			if i < nred:
				nums[i] = 0
			elif (nred <= i) and (i < nwhite):
				nums[i] = 1
			else:	
				nums[i] = 2
b = [0]
a = [1,2,0,2,1,2,0,1,1]
s = Solution()
print s.sortColors(b)
        