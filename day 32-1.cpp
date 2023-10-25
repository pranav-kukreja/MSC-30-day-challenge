//QUESTION:
//Find pivot index in a non decreasing sorted rotated array containing unique elements 
//SOLUTION:
#include <iostream>
using namespace std;
int getpivot(int arr[],int n){//n is size of array
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if (arr[mid]>=arr[0]){
            start=mid+1;
        }
        else if (arr[mid]<arr[0]){
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
void enterarray(int arr[],int n){
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    enterarray(arr,n);
    cout<<getpivot(arr,n);
    return 0;
}
