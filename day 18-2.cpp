// reverse an array
#include<iostream>
using namespace std;
void ReverseArray(int array[], int size){
    for(int i=0;i<(size/2);i++){
        int x = array[i];
        int y = array[size-i-1];
        array[i]=y;
        array[size-i-1]=x;
    }
    cout<<"printing the reversed array:"<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int numbers[100];
    cout<<"enter the elements of array:  ";
    for(int i=0 ; i<size ; i++){
        cin>>numbers[i];
    }
    ReverseArray(numbers, size);
}
