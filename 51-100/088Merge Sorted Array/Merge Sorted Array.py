#!/usr/bin/env python
#-#-coding:utf-8-#-



# Source : https://oj.leetcode.com/problems/merge-sorted-array/
# Author : bin bin
# Date   : 2016-01-26

# 
# Given two sorted integer arrays A and B, merge B into A as one sorted array.
# 
# Note:
#   You may assume that A has enough space (size that is greater or equal to m + n) 
#   to hold additional elements from B. The number of elements initialized in A and B 
#   are m and n respectively.
#               



class Solution:
	def merge(self, nums1, m, nums2, n):
		pos = 0
		i = 0
		count = m
		while i<n:
			if pos < count:
				if nums1[pos] <= nums2[i]:
					pos += 1
					i -= 1
					print i
				else:
					for j in range(count,pos,-1):
						nums1[j] = nums1[j-1]
					nums1[pos] = nums2[i]
					count += 1
			else:
				nums1[pos] = nums2[i]
				pos += 1
				count += 1
			i += 1