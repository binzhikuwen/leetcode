#!/usr/bin/env python
#-*-coding:utf-8-*-


# Source : https://oj.leetcode.com/problems/simplify-path/
# Author : bin bin
# Date   : 2016-01-25


# 
# Given an absolute path for a file (Unix-style), simplify it.
# 
# For example,
# path = "/home/", => "/home"
# path = "/a/./b/../../c/", => "/c"
# 
# 
# Corner Cases:
# 
# Did you consider the case where path = "/../"?
# In this case, you should return "/".
# Another corner case is the path might contain multiple slashes '/' together, such as "/home//foo/".
# In this case, you should ignore redundant slashes and return "/home/foo".
# 
#               



class Solution:
	def simplifyPath(self, path):
		filter = ''
		pos = 0
		for i in range(1,len(path)):
			if (path[pos] == path[i]) and path[i] == '/':
				pass
			else:
				filter += path[i]
				pos = i
		pos = 0
		res = []
		if len(filter) and filter[len(filter)-1] != '/':
			filter += '/'
		for i in range(len(filter)):
			if filter[i] == '/':
				str = filter[pos:i]
				pos = i+1
				if str == '..':
					if len(res):
						res.pop()
				elif str == '.':
					pass
				else:
					res.append(str)
		resstr = ''
		if not len(res):
			resstr = '/'
			return resstr
		for i in range(len(res)):
			resstr = resstr + '/' + res[i]
		return resstr
				
	
path = '/...'
path1 = '/homee////f//oo/////'
path2 = '/../'
path3 = '/.'
s = Solution()
print s.simplifyPath(path)

