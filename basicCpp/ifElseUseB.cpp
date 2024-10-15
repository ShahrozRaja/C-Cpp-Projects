#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"User enter your age:";
    cin>>age;
    /*if(age<18){
        cout<<"Not eligible for job!";
    }
    else if(age<=54){
        cout<<"Eligible for job";
    }
    else if(age<=57){
        cout<<"Eligible for job, but retirement soon!";
    }
    else{
        cout<<"Already retired";
    }*/


   //Nested ifElse approach:

    if(age<18){
        cout<<"Not eligible for job";
    }
    else if(age<=57){                   //age 18 to 57 all are eligible for job 
        cout<<"Eligible for job";
        if(age>=55){                    //but age larger than 54 is going to retire
            cout<<", retirement soon!";
        }
    }
    else{
        cout<<"Retired already!";
    }
    return 0;
}
