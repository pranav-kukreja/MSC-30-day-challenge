//QUESTION
//Print fibonacci series upto n numbers

//0, 1, 1, 2, 3, 5, 8, 13
//SOLUTION
#include <iostream>
using namespace std;
int main(){
    int first_no=0;
    int second_no=1;
    int n;
    cin >>n;
    cout<<first_no<<", ";
    cout<<second_no<<", ";
    int i =0;
    while (i<n-2){
        int third_no=first_no+second_no;
        cout<<third_no<<", ";
        first_no=second_no;
        second_no=third_no;
        i=i+1;
    }
    return 0;
}
