/*
Functions are set of code which performs something for us;
They are used to modularise code and to increase readability;
They are used to use same code multiple times.
Types of functions in C++:
    void function
    parameterised function
    non-parammeterised function
    return function
*/
/*
Step 1: create a "void function" named printName()
Step 2: call the function named printName() inside main() function.
Step 3: create a variable of string type called "name"
Step 4: call function printNameA() with "name" as argument
Step 5: resolve error:
        (a): create a function printNameA() with argument string name 
             like printNameA(string name)
        (b): use variable name inside this function 
*/

#include<bits/stdc++.h>
using namespace std;
// void function:
void printName(){       // <-second(b)
    cout<<"hey Raja"<<endl;   // <-third
}

//parameterised function: 
/*eg.1: Error
void printNameA(){
    cout<<"hey Raja";
}*/
//eg.2:
void printNameA(string name){ // <-sixth(b)
    cout<<"hey "<<name<<endl; // <-seventh
}

int main(){             // <-first  <-control of program
    printName();        // <-second(a)
    string name;        // <-fourth
    cin>>name;          // <-fifth
    printNameA(name);   // <- sixth(a); error will occur if eg.1 is used
    return 0;
}