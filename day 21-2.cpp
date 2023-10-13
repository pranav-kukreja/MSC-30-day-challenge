/*
print a star / diamond shape made up of '*'s , input an odd no from user
this is the no of stars across the diagonal of this rhombus
or the no of rows/levels in the pattern 
for example if n=7
   *
  ***
 *****
*******
 *****
  ***
   *
for example if n=21
          *
         ***
        *****
       *******
      *********
     ***********
    *************
   ***************
  *****************
 *******************
*********************
 *******************
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *
*/
#include <iostream>
using namespace std;
int main()
{
    int number_of_rows;
    cout<<"enter the odd no of stars you want across the diagoanl of the diamond(rhombus)"<<endl;
    cout<<"caution: please enter an odd no only:  "<<endl;
    cin>>number_of_rows;
    int n1=(number_of_rows/2)+1;
    int n2=number_of_rows-n1;
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n1-i-1;j++){
            cout<<" ";
        }
        for(int k=0; k<((2*i)+1); k++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0 ;i < n2 ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<" ";
        }
        for(int k=0;k<(number_of_rows-2-(2*i)) ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
