#!/usr/bin/env python
#-*-coding:utf-8-*-


# Source : https://oj.leetcode.com/problems/rotate-list/
# Author : bin bin
# Date   : 2016-01-25

# 
# Given a list, rotate the list to the right by k places, where k is non-negative.
# 
# For example:
# Given 1->2->3->4->5->NULL and k = 2,
# return 4->5->1->2->3->NULL.
#           

class ListNode:
	def __init__(self, x):
		self.val = x
		self.next = None

class Solution:
    def rotateRight(self, head, k):
		if k == 0 or head == None:
			return head
		iter = head
		n = 1
		while iter.next:
			n+=1
			iter = iter.next
		k= (n - k)%n
		iter.next = head
		for i in range(k):
			iter = iter.next
		head = iter.next
		iter.next = None
		return head