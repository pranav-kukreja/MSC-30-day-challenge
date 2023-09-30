//how to print the pattern
//1 2 3 4
//  2 3 4
//    3 4  
//      4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while (j<i){
            cout<<" ";
            j=j+1;
        }
        int k=0;
        int value=i+1;
        while(k<n-i){
            cout<<value;
            value=value+1;
            k=k+1;
        }
        i=i+1;
        cout<<endl;
    }

    return 0;
}
