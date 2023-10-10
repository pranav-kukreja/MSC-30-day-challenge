//que: https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
//solution
#include <iostream>
using namespace std;
void ReverseArray(int array[], int size ){
    for(int i=0; i<(size/2); i++){
        swap(array[i],array[size-1-i]);
    }
}
void PrintArray(int array[], int size ){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
} 
int main(){
    int size;
    cin>>size;
    int numbers[1000];
    for(int i=0; i<size; i++){
        cin>>numbers[i];
    }
    bool badinput=0;
    if(size<1 || size>1000 ){
        badinput=1;
    }
    for(int i=0; i<size; i++){
        if (numbers[i]>10000 || numbers[i]<1){
            badinput=1;
        }
    }
    if (badinput==0){
        ReverseArray(numbers, size);
        PrintArray(numbers, size);
    }
    return 0;
}
