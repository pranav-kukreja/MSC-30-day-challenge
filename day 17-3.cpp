/*------------QUESTION-------------
swap alternate elements of an array as shown in examples
input array and its size from user and output the updated array
input1: {1,2,3,4,5,6}
output1: {2,1,4,3,6,5}
input2: {1,2,3,4,5,6,7}
output2: {2,1,4,3,6,5,7}
*/
//--------------SOLUTION-------------
#include <iostream>
using namespace std;
void swap_alternate_elements_in_array(int numbers[] , int size){
    if (size%2==0){
        for(int i=0; i<=size-2; i=i+2){
            int first=numbers[i];
            int second=numbers[i+1];
            numbers[i]=second;
            numbers[i+1]=first;
        }   
    }
    else{
        for(int i=0 ; i<=size-3; i=i+2){
            int first=numbers[i];
            int second=numbers[i+1];
            numbers[i]=second;
            numbers[i+1]=first;
        }
    }
    cout<<"ye lo bhai saab updated array: "<<endl;
    for ( int i=0 ; i<size ; i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    return ;
    
}

int main()
{
   int size;
   cout<<"enter the size of array:"<<'\t';
   cin>>size;
   int numbers[100];
   cout<<"enter the elements:"<<"\t";
   for (int i=0; i<size;i++){
       cin>>numbers[i];
   }
   swap_alternate_elements_in_array(numbers,size);
    return 0;
}
//--------SOLUTION METHOD 2-------------------------
//khatarnak logic
//very efficient
#include<iostream>
using namespace std;
//{1,2,3,4,5,6,7,8}   ke liye we want {2,1,4,3,6,5}
//{1,2,3,4,5,6,7} ke liye we want {2,1,4,3,6,5,7}
void swap(int arr[], int size){
    for(int i = 1 ; i <= (size-1) ; i=i+2){
        int x = arr[i];
        int y = arr[i-1];
        arr[ i ]=   y ;
        arr[i-1]=   x ;
    }
    for(int i = 0 ; i<(size) ; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
}

int main(){
    int size;
    cin>>size;
    int numbers[100];
    for(int i=0; i<size ; i++){
        cin>>numbers[i];
    }
    swap(numbers, size);
}
