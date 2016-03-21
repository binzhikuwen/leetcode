// Source : https://oj.leetcode.com/problems/longest-substring-without-repeating-characters/
// Author : Lyndon
// Date   : 2016-03-14

/**********************************************************************************
 *
 * Given a string, find the length of the longest substring without repeating characters.
 * For example, the longest substring without repeating letters for "abcabcbb" is "abc",
 * which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
 * 648 ms
 **********************************************************************************/
/**
 * @param {string} s
 * @return {number}
 */

var lengthOfLongestSubstring = function(s) {
    var temp="",a=0,b=0;
    for(var j=0;j<s.length;j++) {
        for (var i = j; i < s.length; i++) {
            if (temp.indexOf(s[i]) >= 0) {
                b = a > b ? a : b;
                a = 0;
                temp = "";
                break;
            } else {
                temp += s[i];
                a++;
            }
        }
    }
    return a>b?a:b;
};