/*
QUE: linear SEARCH
input an array and a key and tell whether key is there in array or not 
*/
//SOLUTION
#include <iostream>
using namespace std;
bool key_in_array(int array[] , int size , int key){
    for ( int i =0 ; i<size ; i++ ){
        if( array[i] == key ){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int numbers[100];
    int size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter the elements of the array: ";
    for(int i = 0 ; i < size ; i++){
        cin>>numbers[i];
    }
    int key;
    cout<<"enter the element to be searched: ";
    cin>>key;
    bool apna_answer= key_in_array(numbers , size , key );
    if(apna_answer==1){
        cout<<"key found :) "<<endl;
    }
    else{
        cout<<"key not found :( "<<endl; 
    }
    return 0;
}
