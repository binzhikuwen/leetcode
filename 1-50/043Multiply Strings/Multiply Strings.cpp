// Source : https://oj.leetcode.com/problems/multiply-strings/
// Author : Bin bin
// Date   : 2015-09-1

/********************************************************************************** 
* 
* Given two numbers represented as strings, return multiplication of the numbers as a string.
* 
* Note: The numbers can be arbitrarily large and are non-negative.
* 8 ms              
**********************************************************************************/
class Solution 
{
public:
    string multiply(string num1, string num2)
	{
		int n1=num1.length();
		int n2=num2.length();
		int n3=n1+n2;
		string result(n3,'0');
		num1.assign(num1.rbegin(),num1.rend());
		num2.assign(num2.rbegin(),num2.rend());
		
		for(int i=0;i<n1;i++)
		{
			int carry=0;
			for(int j=0;j<n2;j++)
			{
				int value=(num1[i]-'0')*(num2[j]-'0')+carry+result[i+j]-'0';
				result[i+j]=value%10+'0';
				carry=value/10;
			}
			result[i+n2]+=carry;
		}
		int k=0;
		for(int i=n3-1;i>=0;i--)
		{
			if(result[i]!='0')
			{
				k=i;
				break;
			}
		}
		result.erase(result.begin()+k+1,result.end());
		result.assign(result.rbegin(),result.rend());
		return result;
	}
};