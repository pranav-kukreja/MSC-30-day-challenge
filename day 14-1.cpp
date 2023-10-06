//using switch statement create a mini calculator
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a;"<<endl;
    cin>>a;
    cout<<"enter b;"<<endl;
    cin>>b;
    char oper;
    cout<<"enter operator;"<<endl;
    cin>>oper;
    switch(oper){
        case '+': cout<<a+b<<endl;
                  break;
        case '-': cout<<a-b<<endl;
                  break;
        case '*': cout<<a*b<<endl;
                  break;
        case '/': cout<<a/b<<endl;
                  break;
        case '%': cout<<a%b<<endl;
                  break;
        default : cout<<"invalid input"<<endl;
                  break;
    }
    return 0;
}
