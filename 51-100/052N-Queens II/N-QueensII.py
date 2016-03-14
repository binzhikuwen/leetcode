#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/n-queens-ii/
# Author : bin bin
# Date   : 2016-01-19

# 
# Follow up for N-Queens problem.
# 
# Now, instead outputting board configurations, return the total number of distinct solutions.
# 
#

class Solution(object):
    def totalNQueens(self, n):
		self.count = 0
		self.col = [0] * n
		self.search(0,n)
		return self.count
    
    def search(self, cur, n):
		if cur == n:
			self.count+=1
		else:
			for i in range(n):
				ok = True
				self.col[cur] = i
				for j in range(cur):
					if (self.col[j] == self.col[cur]) or (cur-j == self.col[cur]-self.col[j]) or (cur+self.col[cur] == j+self.col[j]):
						ok = False
						break
				if ok:
					self.search(cur+1,n)	

s = Solution()
print s.totalNQueens(4)
