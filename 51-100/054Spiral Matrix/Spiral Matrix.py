#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/spiral-matrix/
# Author : bin bin
# Date   : 2016-01-21


# 
# Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
# 
# For example,
# Given the following matrix:
# 
# [
#  [ 1, 2, 3 ],
#  [ 4, 5, 6 ],
#  [ 7, 8, 9 ]
# ]
# 
# You should return [1,2,3,6,9,8,7,4,5].
# 
#               


class Solution():
	def spiralOrder(self, matrix):
		result = []
		
		if not matrix:
			return result;
		n = len(matrix)
		m = len(matrix[0])
		vis = [([0]*m) for i in range(n)]
		i = 1
		x=y=0
		result.append(matrix[y][x])
		vis[y][x]=2
		while i<n*m:
			while (x<m-1) and (not vis[y][x+1]):
				x+=1
				result.append(matrix[y][x])
				vis[y][x]=1
				i+=1
			while (y<n-1) and (not vis[y+1][x]):
				y+=1
				result.append(matrix[y][x])
				vis[y][x]=1
				i+=1
			while (x>0) and (not vis[y][x-1]):
				x-=1
				result.append(matrix[y][x])
				vis[y][x]=1
				i+=1
			while (y>0) and (not vis[y-1][x]):
				y-=1
				result.append(matrix[y][x])
				vis[y][x]=1
				i+=1
		return result
		
		
		
		
a = [1,2,3]
b = [4,5,6]
c = [7,8,9]
d = [a,b,c]
s = Solution()
print s.spiralOrder(d)

