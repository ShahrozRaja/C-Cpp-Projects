/*Array is used to store multiple datum of similar type
Step 1: declare array, ask the user for input
Step 2: take input from user for the array
Step 3: a. print any element from the array for output
        b. override the element selected for print
        c. print the overwrited element
Step 5: save file*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the elements of array"<<endl;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<endl;
    arr[3] = 16;
    cout<<"overwrited element: "<<arr[3];
    return 0;
}