//QUE: take 2 ints a and b and return total no of set bits in a and b ;
//SOL
#include <iostream>
using namespace std;
int set_bits_in_no(int x ){
    int count=0;
    while(x){
        int bit=x&1;
        x=x>>1;
        if (bit==1){
            count=count+1; 
        }
    }
    return count;
}
int main(){
    int a ,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"you entered a ="<<a<<endl;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    cout<<"you entered b ="<<b<<endl;
    int ans1=set_bits_in_no(a);
    int ans2=set_bits_in_no(b);
    cout<<ans1<<" no of set bits in first number("<<a<<")"<<endl;
    cout<<ans2<<" no of set bits in second number("<<b<<")"<<endl;
    cout<<ans1+ans2<<" no of total bits "<<endl;
    return 0;
}
