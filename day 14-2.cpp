/*
QUESTION: input amount from user and return number of 100rs, 50 rs, 30rs, 1rs denominations required to sum up to the total amount
note that we need to give minimum number of notes so give max amount in terms of 100rs notes and minimum in 1rs notes
sample output
enter total amount:	677
no. of 100 Rs notes:6
no. of 50 Rs notes:1
no. of 20 Rs notes:1
no. of 1 Rs notes:7
-----------------------------------------------------------------------------------------------------------------------------------------
SOLUTION*/
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter total amount:"<<"\t";
    cin>>amount;
    int noof100rsnotes=0;
    int noof50rsnotes=0;
    int noof20rsnotes=0;
    int noof1rsnotes=0;
    switch(100){
        
        case 100: 
                  noof100rsnotes=amount/100;
                  amount=amount%100;
                  cout<<"no. of 100 Rs notes:"<<noof100rsnotes<<endl;
        case 50 : 
                  noof50rsnotes=(amount)/50;
                  amount=amount%50;
                  cout<<"no. of 50 Rs notes:"<<noof50rsnotes<<endl;                  
                  
        case 20 : 
                  noof20rsnotes=amount/20;
                  amount=amount%20;
                  cout<<"no. of 20 Rs notes:"<<noof20rsnotes<<endl;
                   
        case 1  : 
                  noof1rsnotes=amount;
                  cout<<"no. of 1 Rs notes:"<<noof1rsnotes<<endl;
        
    }
    
    return 0;
}
