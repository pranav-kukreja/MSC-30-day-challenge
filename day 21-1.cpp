//que:   https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
//13-10-23  
//SOLUTION
#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool badinput=0;
    if(n<1 || n>pow(10,5) ){
        badinput=1;
    }
    int a=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<1 || a>pow(10,9) ){
            badinput=1;
        }
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(badinput==0){
        for(int i=0; i <n; i++){
            cout<<v[i]<<" ";
        }
    }
    
    return 0;
}
