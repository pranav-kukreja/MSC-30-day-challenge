//QUESTION: Calculate ncr given int n and int c as user input
//SOLUTION
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"enter n :"<<endl;
    cin>>n;
    cout<<"enter r :"<<endl;
    cin>>r;
    /*
    ye method hadd lamba h ....
    int fact_of_n=factorial(n);
    int fact_of_r=factorial(r);
    int fact_of_n_minus_r=factorial(n-r);
    int ans=fact_of_n/((fact_of_r)*(fact_of_n_minus_r));*/
    int ans=(factorial(n))/((factorial(n-r))*factorial(r));//yaani ki kisi expression ke andar bina 
    //kisi variable me store kre bhi function ko bula ke temporarily value ko memory me store krskte hn
    cout<<ans<<endl;
    return 0;
}
