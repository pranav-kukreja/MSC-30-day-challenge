// link to the question; https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//QUESTION
/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
Example 1:
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

Example 2:
Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
*/
//SOLUTION
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int temp=n;
        while(temp>0){
            int digit =temp%10;
            sum=sum+digit;
            product=product*digit;
            temp=temp/10;
        }
        int answer=product-sum;   
        return answer;       
    }
};
