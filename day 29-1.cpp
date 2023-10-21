//QUE: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//SOLUTION:
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int index_of_leftmost_occurence_of_target=-1;
        int index_of_rightmost_occurence_of_target=-1;
        //pehle LEFTMOST OCCURENCE of target nikaalte hain:)  ------------------------------------
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid=(start) + (end-start)/2;
        while(start<=end){
            if ( nums[mid] == target ){
                index_of_leftmost_occurence_of_target=mid;
                end=mid-1;
            }
            else if (  nums[mid] > target  ){
                end=mid-1;
            }
            else if (  nums[mid] < target  ){
                start=mid+1;
            }
            mid=start+((end-start)/2);
        }
        // abb rightmost occurence of target nikaalte hain:)  -------------------------------------
        start=0;
        end=n-1;
        mid=(start) + ((end-start)/2);
        while(start<=end){
            if ( nums[mid] == target ){
                index_of_rightmost_occurence_of_target=mid;
                start=mid+1;
            }
            else if (  nums[mid] > target  ){
                end=mid-1;
            }
            else if (  nums[mid] < target  ){
                start=mid+1;
            }
            mid=start+((end-start)/2);
        }
        vector<int> answer;
        answer.push_back(index_of_leftmost_occurence_of_target);
        answer.push_back(index_of_rightmost_occurence_of_target);
        return answer;
    }
};
