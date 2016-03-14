#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/spiral-matrix-ii/
# Author : bin bin
# Date   : 2016-01-21
# 
# Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.
# 
# For example,
# Given n = 3,
# 
# You should return the following matrix:
# 
# [
#  [ 1, 2, 3 ],
#  [ 8, 9, 4 ],
#  [ 7, 6, 5 ]
# ]
# 
#               


class Solution(object):
	def generateMatrix(self, n):
		matrix = [([0]*n) for i in range(n)]
		if not n:
			return matrix
		x=y=0
		i=1
		matrix[x][y]=i
		while(i<n*n):
			while (y<n-1) and (not matrix[x][y+1]) :
				y+=1
				i+=1
				matrix[x][y] = i
			while (x<n-1) and (not matrix[x+1][y]) :
				x+=1
				i+=1
				matrix[x][y] = i
			while (y>0) and (not matrix[x][y-1]) :
				y-=1
				i+=1
				matrix[x][y] = i
			while (x>0) and (not matrix[x-1][y]) :
				x-=1
				i+=1
				matrix[x][y] = i
		return matrix
		
		
		
s = Solution()
print s.generateMatrix(4)