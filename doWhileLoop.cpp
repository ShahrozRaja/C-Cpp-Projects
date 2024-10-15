/*
    do while loop is used when input is user dependent, & you want your code to
    execute atleast one time
Step 1: a. exceed initialisation value than the condition limit inside the while loop,
        for eg., initialise variable "i" bigger than limit condition:
        let i = 2
        i <= 1
        b. check the output
Step 2: use do-while loop to print your name and check initialisation variable after print
Step 3: print "initialisation variable" again outside the loop and compare both "initialisation 
        variable" values
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Step 1:
    int i = 2;
    while(i <= 1){
        cout<<"Shahroz"<<i<<endl;
        i = i+1;
    }
    //Step 2:
    int j = 2;
    do{
        cout<<"Raja "<<i<<endl;     // j == 2 here and got printed
        j = j+1;                    // j incremented to 3
    }while(j <= 1);                 // j == 3 is not smaller/equal to 1, loop get terminated
    cout<<j;                        // 3 is printed at which loop got terminated
    return 0;
}

//do will make sure to get executed first irrespective of our conditions 