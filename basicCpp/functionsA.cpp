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
     4: resolve error:
        (a): create a function printNameA() with argument string name 
             like printNameA(string name)
        (b): use variable name inside this function
Step 5: create two or more string type variables and use them to print several
        names using same printNameA() function
*/

#include<bits/stdc++.h>
using namespace std;
// void function:
void printName(){              // <-second(b)
    cout<<"hey Raja"<<endl;    // <-second(c)
}

//parameterised function: 
/*eg.1: Error
void printNameA(){
    cout<<"hey Raja";
}*/


//eg.2:
//eg.3:
void printNameA(string name){   // <-third(d), fourth(d), fifth(d)
    cout<<"hey "<<name<<endl;   // <-third(e), fourth(e), fifth(e)
}

int main(){             // <-first  <-control of program
    printName();        // <-second(a)
    //eg.2:
    string name;        // <-third(a)
    cin>>name;          // <-third(b)
    printNameA(name);   // <- third(c); error will occur if eg.1(Line 30) is used
    
    //eg.3:
    string name2;       // <-fouth(a)
    cin>>name2;         // <-fouth(b)
    printNameA(name2);  // <-fourth(c)
    string name3;       // <-fifth(a)
    cin>>name3;         // <-fifth(b)
    printNameA(name3);  // <-fifth(c)
    return 0;
}