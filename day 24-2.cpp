/*
sort an array which has only 0s and 1s such that all 0s come to the left and
all 1s ont the right;
input from the user the length and the elements of the array
return the final array*/
//METHOD 2(uses while loop)
//dry run various test cases to get better clarity
#include <iostream>
using namespace std;
void sort_0s_and_1s(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j && i<n && j>=0){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int n;
    cout<<"enter length of array:  ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort_0s_and_1s(arr,n);
    PrintArray(arr,n);
    return 0;
}
