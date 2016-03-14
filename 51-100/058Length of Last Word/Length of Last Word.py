#!/usr/bin/env python
#-*-coding:utf-8-*-


# Source : https://oj.leetcode.com/problems/length-of-last-word/
# Author : bin bin
# Date   : 2016-01-25

# 
# Given a string s consists of upper/lower-case alphabets and empty space characters ' ', 
# return the length of last word in the string.
# 
# If the last word does not exist, return 0.
# 
# Note: A word is defined as a character sequence consists of non-space characters only.
# 
# For example, 
# Given s = "Hello World",
# return 5.
# 
#               

class Solution:
	def lengthOfLastWord(self, s):
		if len(s)==0:
			return 0
		pos = 0
		for i in range(len(s)-1,-1,-1):
			if s[i] != ' ':
				pos = i
				break
		print pos 
		
		n = 0
		for i in range(pos+1):
			n+=1
			if s[i]==' ':
				n = 0
		return n
		
		
		
a1 = 'a '
s = Solution()
print s.lengthOfLastWord(a1)