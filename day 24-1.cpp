/*
sort an array which has only 0s and 1s such that all 0s come to the left and
all 1s ont the right;
input from the user the length and the elements of the array
return the final array*/
#include <iostream>
using namespace std;
void sort_0s_and_1s(int arr[],int n){
    for(int i=0,j=n-1;i<n && j>=0 && i<j; ){          // USING FOR LOOP
        if(arr[i]==0) {
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
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
