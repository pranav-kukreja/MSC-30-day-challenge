//question:print the following pattern 
//input integer from user which indicates number of rows/levels
/*
        1
      2 3
    4 5 6
  7 8 9 10      */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int start=1;
    while(i<n){
        int j=0;
        while(j<n-i-1){
            cout<<"  ";
            j=j+1;
        }
        int k =0;
        while(k<=i){
            cout<<start<<" ";
            start=start+1;
            k=k+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}
