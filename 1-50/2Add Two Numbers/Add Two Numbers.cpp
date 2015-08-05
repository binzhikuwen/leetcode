// Source : https://oj.leetcode.com/problems/add-two-numbers/
// Author : bin bin
// Date   : 2014-07-27

/********************************************************************************** 
* 
* You are given two linked lists representing two non-negative numbers. 
* The digits are stored in reverse order and each of their nodes contain a single digit. 
* Add the two numbers and return it as a linked list.
* 
* Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
* Output: 7 -> 0 -> 8
* 36ms              
**********************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
         if(NULL==l1)
			return l2;
		if(NULL==l2)
			return l1;
		ListNode *p1 = l1;
		ListNode *p2 = l2;
		ListNode *p3 = NULL;
		ListNode *l3 = NULL;
		int carry = 0;
		while(p1&&p2)
		{
			int val = (p1->val + p2->val + carry)%10;
			carry = (p1->val + p2->val + carry)/10;
			if(NULL==l3)
			{
				l3 = new ListNode(val);
				p3 = l3;
			}else
			{
				p3->next = new ListNode(val);
				p3=p3->next;
			}
			p1=p1->next;
			p2=p2->next;
		}
		while(p1)
		{
			int val = (p1->val + carry)%10;
			carry = (p1->val + carry)/10;
			p3->next = new ListNode(val);
			p1=p1->next;
			p3=p3->next;
		}
		while(p2)
		{
			int val = (p2->val + carry)%10;
			carry = (p2->val + carry)/10;
			p3->next = new ListNode(val);
			p2=p2->next;
			p3=p3->next;
		}
		if(NULL==p1&&NULL==p2&&carry)
		{
		    p3->next = new ListNode(carry);
		}
		return l3; 
    }
};