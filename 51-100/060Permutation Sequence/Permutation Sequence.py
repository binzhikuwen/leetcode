#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/permutation-sequence/
# Author : bin bin 
# Date   : 2016-01-22
# 
# The set [1,2,3,бн,n] contains a total of n! unique permutations.
# 
# By listing and labeling all of the permutations in order,
# We get the following sequence (ie, for n = 3):
# 
# "123"
# "132"
# "213"
# "231"
# "312"
# "321"
# 
# Given n and k, return the kth permutation sequence.
# 
# Note: Given n will be between 1 and 9 inclusive.
#               
import math

class Solution:
	def getPermutation(self, n, k):
		res = ''
		list = []
		for i in range(1,n+1):
			list.append(i)

		for i in range(n):
			pos = (k-1) / math.factorial(n-i-1)
			res += str(list[pos])
			list.remove(list[pos])
			k%=math.factorial(n-i-1)
		return res
			
s = Solution()
print s.getPermutation(1,1)