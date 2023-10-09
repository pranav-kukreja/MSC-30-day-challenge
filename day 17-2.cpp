/*
QUESTION Link :   https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=false
Given an array of integers, find the sum of its elements.
Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers representing the array's elements.

Constraints


Output Format

Print the sum of the array's elements as a single integer.
*/
//SOLUTION
/*
program to input an array (its size and the int values and return the sum of all elements)
*/
#include <iostream>
using namespace std;
int sum_of_elements_in_array(int arr[], int size){
    int sum=0;
    for(int i=0 ; i<size ; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int size;
    //cout<<"enter the size of the array:"<<"\t";
    cin>>size;
    int numbers[1000];
    //cout<<"enter the elements of array:"<<"\t";
    for(int i=0 ; i<size ; i++){
        cin>>numbers[i];
    }
    //cout<<"sum of elements of array:"<<"\t";
    bool badinput=false;
    for(int i=0 ; i<size ; i++){
        if (numbers[i]>1000 || numbers[i]<=0 || size>1000 || size<=0){
            badinput=1;
            break;
        }
    }
    if (badinput==0){
        cout<<sum_of_elements_in_array(numbers,size)<<endl;
    }
    return 0;
}
