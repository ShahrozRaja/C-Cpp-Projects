/*
    Return function:
Step 1: (a): create a function named sum() to add two numbers/variables
        (b): store the sum of these two varible inside another variable
        (c): return the third varible
Step 2: initialise two varibles num1 and num2 inside main() function
Step 3: take input from the user for the two variables
Step 4: call the function sum() with num1 and num2 as parameter

    Maths input function:
    1: minimum/maximum funtion:
Step 1: initialisse two varibles
        take input from the user for these variables
Step 3: (a): use minimum function min() and store the result in a varible to
             find minimum number amongst two
        (b): use maximum function max() and store the result in a varible to
             find maximum number amongst two
Step 4: print the varible
*/
#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}
int main(){
    //return function:
    int num1, num2;
    cout<<"Enter two numbers to get sum: "<<endl;
    cin>>num1>>num2;
    int res = sum(num1, num2);
    cout<<"Sum of two numbers: "<<res<<endl;

    //mimnimum function:
    int minimum = min(num1, num2);
    cout<<"The minimum number is: "<<minimum<<endl;
    //maximmum function:
    int maximum = max(num1, num2);
    cout<<"The maximim number is: "<<maximum<<endl;
    return 0;
}