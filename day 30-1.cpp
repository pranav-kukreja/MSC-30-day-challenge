//QUESTION: https://leetcode.com/problems/peak-index-in-a-mountain-array/
//SOLUTION:  
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0 ;
        int n = arr.size() ;
        int end = n - 1 ;
        int mid=start+((end-start)/2);
        int peakIndex=-1;
        while(start<=end){
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                peakIndex=mid;
                break;
            }
            else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                start=mid; 
            }
            else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
                end=mid;
            }
            mid=start+((end-start)/2);
        }
        return peakIndex;
    }
};
