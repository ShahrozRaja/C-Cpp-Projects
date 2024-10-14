/* In 2d array left index determine "row" right index determine "column"
Step 1: declare 2d array; ask user for input or assign value to the element
Step 2: print the element(s)
Step 3: print another element and check the output  the result will be a garbage value
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];
    cout<<"enter the array element";
    cin>>arr[1][3];
    cout<<arr[1][3]<<endl;
    cout<<arr[1][2]<<" this is an unassigned element!";
    return 0;
}