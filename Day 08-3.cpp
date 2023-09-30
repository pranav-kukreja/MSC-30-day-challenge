//question statement 
//link:https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
/*Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).

The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

If a[i] > b[i], then Alice is awarded 1 point.
If a[i] < b[i], then Bob is awarded 1 point.
If a[i] = b[i], then neither person receives a point.
Comparison points is the total points a person earned.

Given a and b, determine their respective comparison points.

Example

a = [1, 2, 3]
b = [3, 2, 1]
For elements *0*, Bob is awarded a point because a[0] .
For the equal elements a[1] and b[1], no points are earned.
Finally, for elements 2, a[2] > b[2] so Alice receives a point.
The return array is [1, 1] with Alice's score first and Bob's second.

Function Description

Complete the function compareTriplets in the editor below.

compareTriplets has the following parameter(s):

int a[3]: Alice's challenge rating
int b[3]: Bob's challenge rating
Return

int[2]: Alice's score is in the first position, and Bob's score is in the second.
Input Format

The first line contains 3 space-separated integers, a[0], a[1], and a[2], the respective values in triplet a.
The second line contains 3 space-separated integers, b[0], b[1], and b[2], the respective values in triplet b.

Constraints

1 ≤ a[i] ≤ 100
1 ≤ b[i] ≤ 100
Sample Input 0

5 6 7
3 6 10
Sample Output 0

1 1
Explanation 0

In this example:

Now, let's compare each individual score:

, so Alice receives  point.
, so nobody receives a point.
, so Bob receives  point.
Alice's comparison score is , and Bob's comparison score is . Thus, we return the array .

Sample Input 1

17 28 30
99 16 8
Sample Output 1

2 1
Explanation 1

Comparing the  elements,  so Bob receives a point.
Comparing the  and  elements,  and  so Alice receives two points.
The return array is .

Language
C++11
More
34567891011121314151617181921
#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin >>b1>>b2>>b3;
    if(a1>=1 && a1<=100 && a2>=1 && a2<=100 && a3>=1 && a3<=100 && b1>=1 && b1<=100 && b2>=1 && b2<=100 && b3>=1 && b3<=100 ){
        int a[3] ={a1,a2,a3};

Line: 8 Col: 88

Test against custom input
Problem Solving
You have earned 10.00 points!
You are now 20 points away from the 1st star for your problem solving badge.
33%10/30
Congratulations
You solved this challenge. Would you like to challenge your friends?Share on FacebookShare on TwitterShare on LinkedIn

Test case 0

Test case 1

Test case 2

Test case 3

Test case 4

Test case 5

Test case 6

Test case 7
Compiler Message
Success
Input (stdin)
5 6 7
3 6 10
Expected Output
1 1
BlogScoring*/
//------------------------------------------------------------------------------------------
//SOLUTION
#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin >>b1>>b2>>b3;
    if(a1>=1 && a1<=100 && a2>=1 && a2<=100 && a3>=1 && a3<=100 && b1>=1 && b1<=100 && b2>=1 && b2<=100 && b3>=1 && b3<=100 ){
        int a[3] ={a1,a2,a3};
        int b[3]={b1,b2,b3};
        int x=0;//alice's comparision points
        int y =0;//Bob's comparision points
        int i=0;
        while(i<3){
            if (a[i]>b[i]){
                x=x+1;
            }
            else if (a[i]< b[i]){
                y=y+1;
            }
            i=i+1;
        }
        cout<<x<<" "<<y;
    }
    return 0;
}
