/*
    ques: Find maximum among two number and print the result
Step 1: (a): create a function maxN() to find maximum between two numbers/variables
        (b): find the maximum number using if else conditions
Step 2: initialise two varibles and take input from user in main()
Step 3: create a third variable and store the result of maxN()
        and print result
*/
#include<bits/stdc++.h>
using namespace std;
int maxN(int num1, int num2){
    if(num1 > num2)
    return num1;
    else
    return num2;
}

int main(){
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    int maximum = maxN(num1, num2);
    cout<<"Maximum number: "<<maximum<<endl;
    return 0;
}