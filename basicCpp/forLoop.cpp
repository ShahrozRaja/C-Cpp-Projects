/*
        Example 1:
Step 1: print your name 5 times using "for" loop;
Step 2: declare variable "i" inside loop conditions, print "i" outside the loop & 
        check the result(it will be error: 'i' was not declared in this scope);
Step 3: declare varible "i" outside the loop's condition & check the result again
        It will print the last value at which variable "i" got truncated;
        Example 2:
Step 4: use four loop to print your name 25 times & increment variable "i" by 5 times
        in the loop condition;
Step 5: print the value of variable "i" and check the result.
*/

    /*
    Example 1:

    for(int i = 1; i <= 5; i = i+1)     Step 1
    int i;                              Step 3
    for(i = 1; i <=5; i = i+1){
        cout<<"Shahroz Raja"<<i<<endl;
    }
    cout<<i;                            Step 2
    */

#include<bits/stdc++.h>
using namespace std;
int main(){
   //Example 2:
   int i;
   //Step 4:
   for(i = 1; i <= 25; i = i+5){
    cout<<"Shahroz "<<i<<endl;
   }
   //Step 5:
    cout<<i;
    return 0;
}
