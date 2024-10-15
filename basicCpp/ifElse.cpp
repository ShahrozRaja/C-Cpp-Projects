//Write a program that takes an input of age and prints if you are an adult or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Example 1: If Else use -
    int age1;
    cin>>age1;
    if(age1>=18){
        cout<<"You are an adult!";
    }
    else{
        cout<<"You are not an adult!";
    }


    
    //Example 2: ElseIf use -
    int age2;
    cin>>age2;
    if(age2>=18){
        cout<<"You are an adult!";
    }
    //if is false, then program will point to elseif condition but before executing elseif it had
    //to complete its given condition
    else if(age2<18){
        cout<<"You are not an adult!";
    }
return 0;
}
