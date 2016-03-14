#!/usr/bin/env python
#-*-coding:utf-8-*-

# Source : https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/
# Author : bin bin
# Date   : 2016-01-25
# 
# Given a sorted linked list, delete all duplicates such that each element appear only once.
# 
# For example,
# Given 1->1->2, return 1->2.
# Given 1->1->2->3->3, return 1->2->3.
# 




# Definition for singly-linked list.
class ListNode:
	def __init__(self, x):
		self.val = x
		self.next = None
	
class Solution:
	def deleteDuplicates(self, head):
		tptr1 = head
		tptr2 = head
 		while tptr2:
			if	tptr1.val != tptr2.val:
				tptr1.next = tptr2
				tptr1 = tptr2
			elif tptr2.next == None:
				tptr1.next = None
			tptr2 = tptr2.next
		return head