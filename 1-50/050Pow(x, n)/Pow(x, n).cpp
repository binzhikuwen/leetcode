// Source : https://oj.leetcode.com/problems/powx-n/
// Author : Learn from Hao Chen
// Date   : 2015-11-06

/********************************************************************************** 
* 
* Implement pow(x, n).
* 
*               
**********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 *   Basically, most people think this is very easy as below:
 *
 *      double result = 1.0;
 *      for (int i=0; i<n; i++){
 *           result *=x;
 *      }
 *   
 *   However, 
 *
 *     1) We need think about the `n` is negtive number.
 *
 *     2) We need more wisely deal with the following cases:
 *
 *         pow(1, MAX_INT);
 *         pow(-1,BIG_INT);
 *         pow(2, BIG_INT);
 *
 *        To deal with such kind case, we can use x = x*x to reduce the `n` more quickly
 *
 *        so, if `n` is an even number, we can `x = x*x`, and `n = n>>1;`
 *            if `n` is an odd number, we can just `result *= x;`
 *
 */
double pow(double x, int n) {

    bool sign = false;
    unsigned int exp = n;
    if(n<0){
        exp = -n;
        sign = true;
    }
    double result = 1.0;
    while (exp) {
        if (exp & 1){
            result *= x;
        }
        exp >>= 1;
        x *= x;
    }

    return sign ? 1/result : result;

}

int main(int argc, char** argv){
    double x=2.0;
    int n = 3;
    if (argc==3){
        x = atof(argv[1]);
        n = atoi(argv[2]);
    }
    printf("%f\n", pow(x, n));
    return 0;
}

//Bin bin
//Time Limit Exceeded @_@
class Solution 
{
public:
    double myPow(double x, int n)
	{
		if(n>0)
		{
			return binary_pow(x,0,n);
		}else if(n<0)
		{
			return binary_pow(x,0,-n);
		}else
		{
			return 1;
		}
    }
	double binary_pow(double x,int i,int j)
	{
		if(j-i==1)
		{
			return x;
		}
		int mid=i+(j-i)/2;
		double left = binary_pow(x,i,mid);
		double right = binary_pow(x,mid,j);
		return left*right;
	}
};