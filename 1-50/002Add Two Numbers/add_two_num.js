// Source : https://oj.leetcode.com/problems/add-two-numbers/
// Author : Lyndon
// Date   : 2016-03-14

/**********************************************************************************
 *
 * You are given two linked lists representing two non-negative numbers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.
 *
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 *246 ms
 **********************************************************************************/
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    var result={},carry=0,i=0,fg,k,last;
    while(l1&&l2){
        if(i==0){
            k=l1.val+l2.val;
            result.val=k%10;
            carry=parseInt(k/10);
            i=1;
            fg=result;
        }else{
            k=l1.val+l2.val+carry;
            var temp={};
            temp.val=k%10;
            carry=parseInt(k/10);
            fg.next=temp;
            fg=temp;
        }
        l1=l1.next;
        l2=l2.next;
    }
    last=l1?l1:l2;
    while(last){
        var temp={};
        k=last.val+carry;
        temp.val=k%10;
        carry=parseInt(k/10);
        fg.next=temp;
        fg=temp;
        last=last.next;
    }
    if(carry>0){
        var temp={};
        temp.val=carry;
        fg.next=temp;
    }
    return result;
};