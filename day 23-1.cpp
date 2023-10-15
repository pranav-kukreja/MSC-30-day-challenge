//QUE: https://bit.ly/3EwlU6e
//SOLUTION:
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> pairs;
   int n= arr.size();
   for(int i=0; i<n; i++){
      for(int j=i+1;j<n ;j++){
         if(arr[i]+arr[j]==s){
            vector<int>pair={arr[i],arr[j]};
            sort(pair.begin(),pair.end());
            pairs.push_back(pair);
            
         }
      }
   }
   sort(pairs.begin(),pairs.end());
   return pairs;
}
