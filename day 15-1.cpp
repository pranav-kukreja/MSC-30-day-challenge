//QUESTION:
//create a function to find a^b take a and b integers input from the user and return the answer
//SOLUTION:
#include <iostream>
using namespace std;
int power(int a , int b){
    int ans=1;
    for(int i=1 ; i<=b ; i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int result=power(a,b);
    cout<<result<<endl;
    return 0;
}
