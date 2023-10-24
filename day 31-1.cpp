//QUESTION: https://leetcode.com/problems/find-pivot-index/
//SOLUTION:
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int arrsum=0,lsum=0;
        int i=0,j=0;
        while(i<n){
            arrsum+=nums[i];
            i++;
        }
        while(j<n){
            
            if (  ( lsum * 2) == ( ( arrsum - nums[j] ) ) ) {
                return j;
            }

            else if ( ( lsum*2) !=( ( arrsum - nums[j] ) ) ) {
                lsum = lsum + nums[j] ;
            }
            j++;
        }
        return -1;
    }
};
