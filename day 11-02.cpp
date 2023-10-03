//QUESTION 
//print the pattern
/*A 
  B B
  C C C 
  D D D D */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            char val='A'+i;
            cout<<val<<" ";
            
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
}

        
    
    return 0;
}
