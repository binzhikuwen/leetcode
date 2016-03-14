#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/n-queens/
# Author : bin bin
# Date   : 2016-01-19

# The n-queens puzzle is the problem of placing n queens on an n¡Án chessboard 
# such that no two queens attack each other.
# 
# Given an integer n, return all distinct solutions to the n-queens puzzle.
# 
# Each solution contains a distinct board configuration of the n-queens' placement, 
# where 'Q' and '.' both indicate a queen and an empty space respectively.
# 
# For example,
# There exist two distinct solutions to the 4-queens puzzle:
# 
# [
#  [".Q..",  // Solution 1
#   "...Q",
#   "Q...",
#   "..Q."],
# 
#  ["..Q.",  // Solution 2
#   "Q...",
#   "...Q",
#   ".Q.."]
# ]
# 
class Solution:
	def search(self, cur, n):
		if cur == n:
			for i in range(n):
				self.r[i] = self.r[i][:self.col[i]] + 'Q' + self.r[i][self.col[i]+1:]
			self.res.append(self.r)
			self.r = ['.' * n] * n
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
	
	def solveNQueens(self, n):
		self.res = []
		self.r = ['.' * n] * n
		self.col = [0] * n
		self.search(0,n)
		return self.res

s = Solution()
print s.solveNQueens(4)
