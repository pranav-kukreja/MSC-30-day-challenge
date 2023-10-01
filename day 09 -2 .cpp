//print the patterm
/*
1234554321
1234##4321
123####321
12######21
1########1
*/
//----------------------------------------------------------------------------------------
//SOLUTION
# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        //pattern ka pehla hissa
        int j1=0;
        int start1=1;
        while(j1<n-i){
            cout<<start1;
            start1=start1+1;
            j1=j1+1;
        }
        int j2=0;
        while( j2<(i*2)){
            cout<<"#";
            j2=j2+1;
        }
        int j3=0;
        int start2=n-i;
        while (j3<n-i){
            cout<<start2;
            start2=start2-1;
            j3=j3+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}
