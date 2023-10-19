//QUESTION :  https://leetcode.com/problems/missing-number/
//ANSWER:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^i;
            ans=ans^nums[i];
        }
        ans=ans^nums.size();
        return ans;
    }
};
