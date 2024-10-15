/*
    initialisation for "while" loop is first and outside the conditions bracket,
    and increment is at the last line of the loop
Step 1: use while loop to print your name 5 times  & check the result
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    while(i <= 5){
        cout<<"Shahroz Raja "<<i<<endl;
        i = i+1;
    }
    return 0;
}