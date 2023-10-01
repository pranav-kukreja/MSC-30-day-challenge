//print the pattern
/* 1 
  121
 12321
1234321  */
//SOLUTION
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while (i<n) {
        //spaces print krlo
        int spaces=n-i-1;
        while(spaces>0) {
            cout<<" ";
            spaces=spaces-1;
        }
        // ab left tringle numbers ka
        int col=0;
        int start=1;
        while(col<=i){
            cout<<start;
            start=start+1;
            col=col+1;
        }
        //ab right vaala triangle
        int value=i;
        while(value>0){
            cout<<value;
            value=value-1;
        }
        
        
        i=i+1;
        cout<<endl;
    }
    
    
    return 0;
}
