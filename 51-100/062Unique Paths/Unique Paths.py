#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/unique-paths/
# Author : bin bin
# Date   : 2016-01-25

# 
# A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
# 
# The robot can only move either down or right at any point in time. The robot is trying to reach 
# the bottom-right corner of the grid (marked 'Finish' in the diagram below).
#    
#    
#    start                                                 ?
#    +---------+----+----+----+----+----+                   
#    |----|    |    |    |    |    |    |                   
#    |----|    |    |    |    |    |    |                   
#    +----------------------------------+                   
#    |    |    |    |    |    |    |    |                   
#    |    |    |    |    |    |    |    |                   
#    +----------------------------------+                   
#    |    |    |    |    |    |    |----|                   
#    |    |    |    |    |    |    |----|                   
#    +----+----+----+----+----+---------+                   
#                                   finish                  
#    
# 
# How many possible unique paths are there?
# 
# Above is a 3 x 7 grid. How many possible unique paths are there?
# 
# Note: m and n will be at most 100.
#               
import math
class Solution(object):
	def uniquePaths(self, m, n):
		sum = m + n
		res = math.factorial(m+n-2) / math.factorial(n-1) /math.factorial(m-1)
		return res
