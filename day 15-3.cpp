//input integer n and output whether prime or not using functions
#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0) {
            
            return 0;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if (isPrime(n)){
        cout<<"prime";
    }
    else{
        cout<<"not prime no. ";
    }
        
    return 0;
}
