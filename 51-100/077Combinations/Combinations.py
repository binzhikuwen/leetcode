#!/usr/bin/env python
#-#-coding:utf-8-#-

# Source : https://oj.leetcode.com/problems/combinations/
# Author : bin bin
# Date   : 2016-01-26
# 
# Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.
# 
# For example,
# If n = 4 and k = 2, a solution is:
# 
# [
#   [2,4],
#   [3,4],
#   [2,3],
#   [1,2],
#   [1,3],
#   [1,4],
# ]
# 
#               
import copy

class Solution(object):
	def combine(self, n, k):
		self.res = []
		a = [0]*k
		self.backtracking(0,a,n,k)
		return self.res
	
	
	def backtracking(self,cur,a,n,k):
		if cur==k:
			self.res.append(copy.copy(a))
		else:
			for i in range(1,n+1):
				a[cur] = i
				ok = True
				for j in range(cur):
					if a[cur] <= a[j]:
						ok = False
				if ok:
					self.backtracking(cur+1,a,n,k)
				

s = Solution()
print s.combine(4,2)
        