/*multiple characters makes a string, for eg: "Shahroz" where s, h, a, h, r, o, z are 7 characters
Step 1: declare a string
Step 2: print different elements of the string
Step 3: find length of the string using size() function
Step 4: print last element of the string 
Step 5: override any element from array and see the result 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Shahroz";
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    int len = s.size();     //function to find length/size of string
    cout<<len<<endl;
    cout<<"Last element: "<<s[len-1]<<endl;
    //index of array & string starts from 0 but size is in natural numbers therefore len-1 for last element
    
    s[2] = 'o';
    s[len-1] = 't';
    cout<<"Result after override: "<<s;
    return 0;
}