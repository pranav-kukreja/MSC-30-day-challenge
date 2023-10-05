/*
que 231 leetcode ( link: https://leetcode.com/problems/power-of-two/description/)
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2 power x.
*/
//SOLUTION
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=0;i<=30;i++){
            if (ans==n){
                return true;
            }
            else if (ans<INT_MAX/2){
                ans=ans*2;
            }
        }
        return false;
    }
};
