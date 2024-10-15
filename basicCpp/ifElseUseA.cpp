#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your Marks:"<<endl;
    cin>>marks;
    /*if(marks<25){
        cout<<"Grade F"<<endl;
    }
    else if(marks >= 25 && marks <= 44){
        cout<<"Grade E"<<endl;
    }
    else if(marks >= 45 && marks <=49){
        cout<<"Grade D"<<endl;
    }
    else if(marks >= 50 && marks <=59){
        cout<<"Grade C"<<endl;
    }
    else if(marks >= 60 && marks <=79){
        cout<<"Grade B"<<endl;
    }
    else if(marks >= 80 && marks <=100){
        cout<<"Grade A!"<<endl;
    }*/


   /*we can exclude && from "else if" coditions. 
     There is no need to define lower bound in "else if" condition(s) because if previous "if" or "else if"
     condition fails then program control will start checking from upper limit of failed condition to limit 
     of new condition in "else if" and so on */

     if(marks<25){
        cout<<"Grade F";
     }
     else if(marks<=44){
        cout<<"Grade E";
     }
     else if(marks<=49){
        cout<<"Grade D";
     }
     else if(marks<=59){
        cout<<"Grade C";
     }
     else if(marks<=79){
        cout<<"Grade B";
     }
     else if(marks<=100){
        cout<<"Grade A";
     }
    return 0;
}
