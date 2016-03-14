#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/add-binary/
# Author : bin bin
# Date   : 2016-01-22

# 
# Given two binary strings, return their sum (also a binary string).
# 
# For example,
# a = "11"
# b = "1"
# Return "100".
# 
#               

import string

class Solution:
	def addBinary(self, a, b):
		a = a[::-1]
		b = b[::-1]
		na = len(a)
		nb = len(b)
		n=0
		if na < nb:
			a += (nb-na)*'0'
			n = nb
		else:
			b += (na-nb)*'0'
			n = na
		print a
		print b
		res = ''
		carry = 0
		for i in range(n):
			res += str( (string.atoi(a[i]) +  string.atoi(b[i]) + carry)%2 )
			carry = (string.atoi(a[i]) +  string.atoi(b[i]) + carry)/2
		if carry != 0:
			res += str(carry)
		res = res[::-1]
		return res
a='11'
b='1'
s = Solution()
print s.addBinary(a,b)

