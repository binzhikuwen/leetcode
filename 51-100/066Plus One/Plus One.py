#!/usr/bin/env python
#-*-coding:utf-8-*-


# Source : https://oj.leetcode.com/problems/plus-one/
# Author : Hao Chen
# Date   : 2014-06-21

# 
# Given a non-negative number represented as an array of digits, plus one to the number.
# 
# The digits are stored such that the most significant digit is at the head of the list.
#               

class Solution:
    def plusOne(self, digits):
		dig = digits[::-1]
		carry = 0
		ok = True
		i = 0
		while carry!=0 or ok:
			if ok:
				tmp = (dig[i] + 1)%10
				carry = (dig[i] + 1)/10
				dig[i] = tmp
			else:
				tmp = (dig[i] + carry)%10
				carry = (dig[i] + carry)/10
				dig[i] = tmp
			ok = False
			i+=1
			if i==len(dig) and carry != 0:
				dig += [carry]
				break
		
		dig = dig[::-1]
		return dig
a=[8,9,9]
s = Solution()
print s.plusOne(a)
