//QUESTION
//write a code to find max and min element 
//in an array of integers whose elements are taken as input
//ANSWER:
#include <iostream>
#include <climits>
using namespace std;
int get_max_element(int numbers[100],int size){
    int max=INT_MIN;
    for(int i=0 ; i<size ; i++){
        if (numbers[i]>max){
            max=numbers[i];
        }
    }
    cout<<"maximum element; ";
    return max;
}
int get_min_element(int numbers[100], int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if (numbers[i]<min){
            min = numbers[i]; 
        }
    }
    cout<<"minimum element;  ";
    return min;
}
int main()
{
    int size;
    cout<<"enter the size of the integer array:  "<<endl;
    cin>>size;
    int numbers[100];
    cout<<"enter the elements of array"<<endl;
    for(int i=0 ; i<size ; i++){
        cin>>numbers[i];
    }
    cout<<get_max_element(numbers,size)<<endl;
    cout<<get_min_element(numbers,size)<<endl;
    return 0;
}
