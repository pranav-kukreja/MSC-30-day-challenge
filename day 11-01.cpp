//QUESTION: print the pattern 

/*      A 
        B C
        C D E
        D E F G */
//SOLUTION
#include <iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int i =0;
    while(i<n){
            int j=0;
            while(j<=i){
                char value='A'+i+j;
                cout<<value<<" ";
                j=j+1;
            }
            i=i+1;
            cout<<endl;
    }
    return 0;
}
