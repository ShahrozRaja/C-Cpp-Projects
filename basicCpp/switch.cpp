#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout<<"Enter a number to find the day";
    cin>>day;       //1,2,3... for int input, a,b,c... for char input
   /*switch(day){            
        case 1:
        cout<<"Monday";
        case 2:
        cout<<"Tuesday";
        case 3:
        cout<<"Wednesday";
        case 4:
        cout<<"Thursday";
        case 5:
        cout<<"Friday";
        case 6:
        cout<<"Saturday";
        case 7:
        cout<<"Sunday";
    }


    input:
    Enter a number to find the day
    5
    output:
    FridaySaturdaySunday
    result: Wrong output is printed
    resolve this through "break" statement
    Break: In C++ break is used to break or get out of a conditional statement like switch's cases*/

    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:            //In case of wrong input program gives  control to defult statement
        cout<<"Wrong input! please try again";
    }                       
                            //default doesn't require break statement if control is at default 
                            //it will automatically come out of switch
    return 0;


}
