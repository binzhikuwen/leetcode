// Source : https://oj.leetcode.com/problems/remove-nth-node-from-end-of-list/
// Author : learn from Hao Chen
// Date   : 2015-08-10

/********************************************************************************** 
* 
* Given a linked list, remove the nth node from the end of list and return its head.
* 
* For example,
* 
*    Given linked list: 1->2->3->4->5, and n = 2.
* 
*    After removing the second node from the end, the linked list becomes 1->2->3->5.
* 
* Note:
* Given n will always be valid.
* Try to do this in one pass.
* 4ms
*               
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
     ListNode* removeNthFromEnd(ListNode* head,int n)
     {
    		ListNode *first = head;
    		ListNode *temp = NULL;
    		int len=0;
    		while(first)
    		{
    			len++;
    			first=first->next;
    		}
    		if(len-n==0)
    		{
    		    head=head->next;
    		    return head;
    		}
    		first=head;
    		for(int i=0;i<len-n-1;i++)
    		{
    			first=first->next;
    		}
    		temp = first;
    		temp = temp->next;
    		if(temp!=NULL)
    		{
    			temp = temp->next;
    		}
    		first->next=temp;
    		return head;
	}    
};